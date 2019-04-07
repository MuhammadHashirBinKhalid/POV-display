void povserver(){
  WiFiClient client = server.available();
  if (!client) {
    return;
    }
// Wait until the client sends some data
  Serial.println("new client");
  //while (!client.available()) {
    //delay(1);
  //}

  // Read the first line of the request
  String command1 = client.readStringUntil('/');
  String command = client.readStringUntil('/');
  Serial.println(command);
  if (command == "text") {
    value1 = client.readStringUntil('/');
    value1.replace("%20", " ");
    value1.toCharArray(charBuf, 70) ;
    Serial.println(value1);
if((value1.length()>0)&&(tempcount<max_dig)){
  for(int i=0; i<value1.length(); i++){
  tempvalue=charBuf[i];
  //Serial.print(tempvalue);
  if(tempvalue>64){tempvalue=tempvalue-65+10;
  //Serial.print(tempvalue);
  }
  else if(tempvalue>47){ tempvalue=tempvalue-48;
  //Serial.print(tempvalue);
  }
  else if (tempvalue==36){ 
    for(;tempcount<max_dig;tempcount++){ toprint[tempcount]=36;}
  } 
  else if(tempvalue==32){tempvalue=36; }
  if(tempcount<max_dig){ 
    toprint[tempcount]=tempvalue;
    Serial.print(toprint[tempcount]);
  tempcount++;}
  }}
if(tempcount>=max_dig){tempcount=0;}
    value = client.readStringUntil('/');
    value.replace("%20", " ");
    Serial.println("fontsize: ");
    value.toCharArray(charBuf, 70) ;
      fontsize=value.toInt();
    Serial.println(fontsize);
   String value3 = client.readStringUntil('/');
    Serial.println(value3);
    if(value3=="YES"){
     // ntptime();
    }
    
    }
  else {  // Prepare the response
    String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
    s += file1;
    client.flush();
    // Send the response to the client
    while (s.length() > 2000)
    {
      String dummy = s.substring(0, 2000);
      client.print(dummy);
      s.replace(dummy, " ");
    }

    client.print(s);
    delay(1);
    Serial.println("Client disconnected");

    // The client will actually be disconnected
    // when the function returns and 'client' object is destroyed
  }
 }
