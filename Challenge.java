import java.util.*;


class Challenge {

    public static Character[] DeleteFrontSpaces(char[] markdown, int index) {
        List<Character> list = new ArrayList<>();
        for(char x:markdown)
        list.add(x);

        while(markdown[index] == ' '){
            list.remove(index);
            index++;
        }
        Character[] items = new Character[list.size()];
        items= list.toArray(items);
        return items;
    }
    public static int countTags(int index, Character[] markdownCA){
        while(markdownCA[index] == '#')
            index++;
        return index;
    }

    public static String getmarkdown(Character[] markdownCA,int index){
        String header="";
        while(markdownCA[index] == ' ')
        index++;
        while(index < markdownCA.length)
        header += markdownCA[index];
        return header;

    }

    public static boolean isValid(int numHTags, Character[] markdownCa){
        return (numHTags>=7)?
        false:
        (markdownCa[numHTags]== ' ')? true:false;
        
    }
    public static String markdownParser(String markdown) {
        
        Character[] markdownCA = DeleteFrontSpaces(markdown.toCharArray(), 0);
        int numHTags = countTags(0,markdownCA);
        String header = getmarkdown(markdownCA,numHTags);

        if(isValid(numHTags,markdownCA)){
            return "<h"+Integer.toString(numHTags)+">"+header+"</h"+Integer.toString(numHTags)+">";
        }else return header;
    }



    public static void main(String args[]) {
        System.out.println(markdownParser("# header"));
    }
}