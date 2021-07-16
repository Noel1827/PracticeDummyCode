#include <iostream>
using namespace std;

int AvoidLastSpaces(string markdown){
  int Lindex = markdown.size()-1;
  while(markdown.at(Lindex)== ' ')
  Lindex--;
  return Lindex;
}
int AvoidSpaces(int i, string markdown){
  while (markdown.at(i) == ' ')
    i++;
  return i;
}

int findclosingStrks(int index, string markdown, int Lindex){
  while(Lindex > index &&markdown.at(index)!= '*')
    index++;
  return index-1;
}
bool found(int index, string markdown, int Lindex){
  int next= index+1;
  if(next > Lindex)return false;
  bool valid =  markdown.at(index) == '*' && markdown.at(next)== '*';
 return valid;
}
bool ifnotspaces(int index, string markdown, int tick, int Lindex){
  if(tick >0)return true;
  int next = index + 2;
  if(next > Lindex)return true; // DUDA
  int before = findclosingStrks(next,markdown, Lindex);
  if(markdown.at(before)== ' ' || markdown.at(next)== ' '){
    return false;
  }else return true;
}
bool ifcloses(int index, string markdown, int tick, int Lindex){
  int next = index+2;
  if(tick>0)return true;
   if(next+1> Lindex) return false;// duda
  while(markdown.at(next)!= '*' )
  next++;
 
  
  if(markdown.at(next)== '*' && markdown.at(next+1)== '*')return true;
  return false;
}

string getmarkdown(int index, string markdown, int Lindex){
  string header;
  int tick=0;
  bool skip = false;
    while (index != Lindex+1){
      if(found(index,markdown, Lindex)  && ifnotspaces(index,markdown,tick,Lindex) && !skip && ifcloses(index, markdown,tick, Lindex)){
        if(tick ==0){
        header += "<strong>";
        tick++;
        }
        else {
        header +="</strong>";
        tick=0;
        }
        index+=2;
        continue;
      }else if(found(index,markdown, Lindex) && !(ifnotspaces(index,markdown,tick, Lindex))){
        skip = true;
      }
    header += markdown.at(index);
    index++;
  }
  return header;
}
int countTags(int i, string markdown){
  int tags = i;
  while (tags < tags + 7){
    if (markdown.at(tags) != '#')
      break;
    tags++;
  }
  
  return tags-i;
}
bool isValid(int i, string markdown, int numHTags){
  return (markdown.at(i)== ' ')?(numHTags>=7)?false:true:false;
}

std::string markdownparser(std::string markdown)
{
 int index= AvoidSpaces(0,markdown), 
 numHTags = countTags(index,markdown), 
 Lindex = AvoidLastSpaces(markdown);
  
if(isValid(index+numHTags, markdown, numHTags))
   return "<h" + to_string(numHTags) + ">" + getmarkdown(AvoidSpaces(index+numHTags,markdown), markdown, Lindex) + "</h" + to_string(numHTags) + ">";
else return getmarkdown(index,markdown, Lindex);
}
int main()
{
  cout << markdownparser("8* **LO** **");

  return 0;
}
