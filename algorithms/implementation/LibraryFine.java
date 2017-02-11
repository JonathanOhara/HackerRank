import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.concurrent.TimeUnit;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int d1 = in.nextInt();
        int m1 = in.nextInt();
        int y1 = in.nextInt();
        int d2 = in.nextInt();
        int m2 = in.nextInt();
        int y2 = in.nextInt();
        
        Calendar date1 = Calendar.getInstance();
        Calendar date2 = Calendar.getInstance();

        date1.setTimeInMillis(0);
        date2.setTimeInMillis(0);

        date1.set(y1, m1-1, d1);
        date2.set(y2, m2-1, d2);
        /*
        System.out.println ( date1 );
        System.out.println ( date2 );
        */
        
        if( date1.before(date2) ){
            System.out.println ( 0 );
        }else if( m1 == m2 && y1 == y2 ){
            long diff = date1.getTimeInMillis() - date2.getTimeInMillis();
        
            long days = TimeUnit.DAYS.convert(diff, TimeUnit.MILLISECONDS);
            
            System.out.println ( days * 15 );
        }else if( y1 == y2 ){
            
            System.out.println ( (m1-m2) * 500 );
        }else{
            System.out.println ( 10000 );
        }
        
    }
}