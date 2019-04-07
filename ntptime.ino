 void ntptime(){
  //while(!timeClient.update()) {
    //timeClient.forceUpdate();
  //}
  // The formattedDate comes with the following format:
  // 2018-05-28T16:00:13Z
  // We need to extract date and time
  formattedDate = timeClient.getFormattedDate();
 // Serial.println(formattedDate);

  // Extract date
  int splitT = formattedDate.indexOf("T");
  dayStamp = formattedDate.substring(0, splitT);
  //Serial.print("DATE: ");
  //Serial.println(dayStamp);
  // Extract time
  
  timeStamp = formattedDate.substring(splitT+1, formattedDate.length()-1);
  
  Serial.print("HOUR: ");
  Serial.println(timeStamp);
  timeStamp.toCharArray(charBuff, 70) ;
  if((timeStamp.length()>0)&&(tempcount<max_dig)){
  for(int i=0; i<timeStamp.length(); i++){
  tempvalue=charBuff[i];
  if(tempvalue>47&&tempvalue<58){ tempvalue=tempvalue-48;
  }
  else if (tempvalue==36){ 
    for(;tempcount<max_dig;tempcount++){ toprint[tempcount]=36;}
  } 
  else if(tempvalue==32){tempvalue=36;}
   else if(tempvalue==58){tempvalue=37;}
  if(tempcount<max_dig){ 
    toprint[tempcount]=tempvalue;
    Serial.print(toprint[tempcount]);
  tempcount++;}
  }}
if(tempcount>=max_dig){tempcount=0;}
  //delay(1000);
  }
