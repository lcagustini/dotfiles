Vim�UnDo� *ѩ=|��f4W���g���neL�������m|   $     method: 'SET',            "       "   "   "    YG�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             YG     �                   5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YG     �                  �               5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             YG    �                 httpGet("localhost:3000")5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YG3     �          
       �          	    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YGC     �             �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YGE     �                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YGQ     �   
             httpGet("localhost:3000");5�_�      
              
        ����                                                                                                                                                                                                                                                                                                                                                             YGR     �   
               �   
            5�_�         	       
           ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �             
       function httpGet(theUrl)   {   '    var xmlHttp = new XMLHttpRequest();   J    xmlHttp.open( "GET", theUrl, false ); // false for synchronous request       xmlHttp.send( null );        return xmlHttp.responseText;   }       http.5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �                  �               5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �         #    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �      	   $        hostname: 'www.google.com',5�_�                    	   
    ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �      
   $        port: 80,5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �   	      $        path: '/upload',5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �   
      $        method: 'POST',5�_�                          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �                8    'Content-Type': 'application/x-www-form-urlencoded',5�_�                          ����                                                                                                                                                                                                                                                                                                                                                 V       YG     �          $      var http = require('http');    �         $       �         #    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YG     �          $       �          #    5�_�                       (    ����                                                                                                                                                                                                                                                                                                                                                 V       YG&    �          $      (var querystring = require('querystring')5�_�      "                     ����                                                                                                                                                                                                                                                                                                                                                 V       YG7    �         $        method: 'GET',5�_�          !       "          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �         $        method: 'SET',5�_�             "   !          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �         $      '  method: 'Uvar http = require('http');       .//The url we want is `www.nodejitsu.com:1337/`   var options = {     host: 'www.nodejitsu.com',     path: '/',   J  //since we are listening on a custom port, we need to specify it by hand     port: '1337',   6  //This is what changes the request to a POST request     method: 'POST'   };       callback = function(response) {     var str = ''   (  response.on('data', function (chunk) {       str += chunk;     });       "  response.on('end', function () {       console.log(str);     });   }       *var req = http.request(options, callback);   F//This is the data we are posting, it needs to be a string or a buffer   req.write("hello world!");   req.end()',5�_�             !             ����                                                                                                                                                                                                                                                                                                                                                 V       YG     �          $      6  console.error('problem with request: ${e.message}`);5�_�                       3    ����                                                                                                                                                                                                                                                                                                                                                 V       YG   	 �          $      6  console.error('problem with request: ${e.message}');5�_�                          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�   
 �         $        method: 'PUT',5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �         $        method: 'DELETE',5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �         $        method: 'DELETE',5�_�                             ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �         $        method: 'DELEE',5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YGI    �         $        method: 'POST',5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       YG     �         #      !const postData = JSON.stringify({5�_�                          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�    �              5�_�                          ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       YG�     �              5�_�              
   	          ����                                                                                                                                                                                                                                                                                                                                                             YG�     �                var hGttp = require('http');5��