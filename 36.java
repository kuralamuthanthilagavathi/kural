import java.io.*;
class Count
{
    public static void main(String args[])
    {
        String str = "#GeeKs01fOr@gEEks07";
        int u = 0, l = 0, num = 0, spl = 0;
 
        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);
            if (ch >= 'A' && ch <= 'Z')
                u++;
            else if (ch >= 'a' && ch <= 'z')
                l++;
            else if (ch >= '0' && ch <= '9')
                num++;
            else
                spl++;
        }
 
        System.out.println("Lower case letters : " + l);
        System.out.println("Upper case letters : " + u);
        System.out.println("Number : " + number);
        System.out.println("Special characters : " + spl);
    }
    }
