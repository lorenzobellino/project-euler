
import java.math.BigInteger;

public class project29 {

	public static void main(String[] args) {
		int i,j;
		int k=0;
		BigInteger p ;
		BigInteger result;
		BigInteger []num;
		
		num = new BigInteger[10000];
		for(i=2;i<=100;i++) {
			p = new BigInteger(Integer.toString(i));
			for(j=2;j<=100;j++) {
				result = p.pow(j);
				if(!(java.util.Arrays.asList(num).contains(result))) {
					num[k++]=result;
				}
				
			}
		}
		
		System.out.println("tot "+ k);
	}

}
