import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Arrays;
import org.apache.commons.lang.ArrayUtils;

public class Solution {

    static String isValid(String s){
        // Complete this function
        int count=0;
        char[] inputKey = s.toCharArray();
        Arrays.sort(inputKey);
       // for (int p=0; p<inputKey.length;p++){System.out.print(inputKey[p]);}
        int[] countArray = new int[26];
        int size = inputKey.length;
        int i=0;
        int j=0;
        int wrongCount=0;
        int crap=0;
        String answer=null;
       /* while (size>0){
            char temp=inputKey[i];
            count=0;
            while (inputKey[i]==temp){
                count++;
                i++;
            }


            countArray[j]=count;
                j++;
            size= size-i;
        }*/

        //count number of occurences and store them in array countArray
        for(int b=0; b<size; b++){
            countArray[inputKey[b]-97]++;


        }
       /* for (int fsc=0; fsc<countArray.length; fsc++){
            System.out.print(countArray[fsc]);
        }*/
        // removing the zeroes

         while(ArrayUtils.contains(countArray, 0))
            countArray = ArrayUtils.removeElement(countArray, 0);

         /* for (int fsc=0; fsc<countArray.length; fsc++){
            System.out.print(countArray[fsc]);
        }*/

        for (int z=0; z<countArray.length; z++){

            if (countArray[0]==countArray[z]){
                continue;
            }

            else if (countArray[0]!=countArray[z]){
               // answer = "NO";
                // second condition starts here
                wrongCount++;
                 crap = z;

            }


          /*  elseif {
                answer="YES";

            }*/
        }
        if (wrongCount==0){
            answer="YES";
       }
        else if (wrongCount==1){
            countArray[crap] = countArray[crap]-1;
             while(ArrayUtils.contains(countArray, 0))
            countArray = ArrayUtils.removeElement(countArray, 0);
            for (int l=0; l<countArray.length; l++){
                if (countArray[0]!=countArray[l]){
                    answer = "NO";
                }else {
                    answer = "YES";
                }
            }
        }else {
            answer = "NO";
        }
        return answer;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = isValid(s);
        System.out.println(result);
    }
}
