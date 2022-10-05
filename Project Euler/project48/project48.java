
import java.lang.StringBuffer;
import java.math.BigInteger;

public class project48 {

	public static void main(String[] args) {
		
		BigInteger n= new BigInteger("0");
		int i;
		BigInteger som = new BigInteger("0");
		StringBuffer T = new StringBuffer();
		String fina = new String();
		for(i=1;i<=1000;i++) {
			n = new BigInteger(Integer.toString(i));
			n= n.pow(i);
			som = som.add(n);
			//System.out.println(n+" "+som);
			
		}
		System.out.println(som);
		T.append(som);
		fina = T.substring(T.length()-10, T.length());
		System.out.println(fina);
	}

	
}
