maxN = 2000
tot = []
for i in range(maxN):
    stri = [str(x) for x in str(i)]
    if(len(stri) == len(set(stri)) and '0' not in stri):
        #print(stri)
        for j in range(i+1,maxN):
            strj = [str(x) for x in str(j)]
            if(len(strj) == len(set(strj)) and '0' not in strj):
                #print(strj)
                strc=stri+strj
                if(len(strc) == len(set(strc))):
                    #print(strc)
                    d = i*j
                    strd = [str(x) for x in str(d)]
                    if(len(strd) == len(set(strd)) and '0' not in strd):
                        #print(strd)
                        res = strc+strd
                        if(len(res) == len(set(res)) == 9):
                            # print(res)
                            # print(i,j,d)
                            tot.append(d)
                            
print(sum(set(tot)))
    # for j in range(1000):
    #     strj = str(i).split() 
    #     if(len(strj) != len(set(strj))):
    #         break
    #     strc = stri+strj
    #     if(len(strc) != len(set(strc))):
    #         break
    #     else:
    #         d = i*j
    #         strd = str(d).split()
    #         if(len(strd) == len(set(strd))):
    #             print(stri+strj+strd)