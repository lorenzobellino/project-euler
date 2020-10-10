package Prog29;

import java.lang.StringBuffer;;

public class pot {

	public static void main(String[] args) {
		
		int i,som=0;
		StringBuffer Dec = new StringBuffer();
		StringBuffer revDec = new StringBuffer();
		StringBuffer Bin = new StringBuffer();
		StringBuffer revBin = new StringBuffer();
		for(i=1;i<1000000;i++) {
			Dec = new StringBuffer();
			Dec.append(Integer.toString(i));
			revDec = new StringBuffer();
			revDec.append(Dec);
			revDec=revDec.reverse();
			//revDec = new StringBuffer();
			//revDec = Dec.reverse();
			if(Dec.toString().equals(revDec.toString())) {
				//System.out.println(Dec + " / "+revDec);
				Bin = new StringBuffer();
				Bin = dec2bin(i);
				revBin = new StringBuffer();
				revBin.append(Bin);
				revBin = revBin.reverse();
				if(Bin.toString().equals(revBin.toString())) {
					som+=i;
					System.out.println(Dec+"/"+revDec+ " --> "+Bin+"/"+revBin);
				}
			}
			
		}
		System.out.println(som);
		
	}

	private static StringBuffer dec2bin(int i) {
		StringBuffer buf = new StringBuffer();
		while(i!=0) {
			buf.append(Integer.toString(i%2));
			i=(int) i/2;
		}
		return buf;
	}

	

}
