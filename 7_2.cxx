 #​include​ ​<​iostream​> 
 ​#​include​ ​<​string​> 
  
 ​using​ ​namespace​ ​std​; 
  
 ​void​ ​conversion10to8(​int​ num, ​int​ first, ...) 
 ​{ 
 ​     
 ​     
 ​        ​int​* ptr = &first; 
 ​        ​while​ (num>=​1​) 
 ​        { 
 ​                 
 ​                string j = ​"​"​; 
 ​                ​int​ k = *ptr; 
 ​                ​while​ (k>​0​) 
 ​                { 
 ​       
 ​                    ​int​ a = k % ​8; 
 ​                    string s = ​to_string​(a); 
 ​                    j += s; 
 ​                    k = k / ​8; 
 ​                } 
  
 ​                ​int​ l = j.​length​(); 
 ​                ​int​ n = l - ​1​; 
 ​                ​for​ (​int​ i = ​0​; i < (l / ​2​); i++)
                 { 
 ​                    ​swap​(j[i], j[n]); 
 ​                    n = n - ​1​; 
 ​                } 
 ​                cout << j << ​"​ ​"​; 
 ​                num = num - ​1​; 
 ​                ptr++; 
 ​        } 
 ​} 
  
  
  
  
  
 ​int​ ​main​() 
 ​{ 
 ​     
 ​    ​conversion10to8(​1, ​75, ​612​); 
 ​    cout << endl; 
 ​    ​conversion10to8(​2, ​718, ​502​, ​724​, ​20​); 
 ​    cout << endl; 
 ​    ​conversion10to8(​7, ​31​, ​764​, ​551​, ​125​, ​976, ​91​, ​12​); 
  
  
 ​     
 ​     
 ​    ​return​ ​0​; 
 ​}