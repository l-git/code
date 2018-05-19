var dgram = require('dgram');
var message = new Buffer("Some bytes");
var client = dgram.createSocket("udp4");
client.send(message, 0, message.length, 41234, '127.0.0.1',function(err,bytes){
if(err){
console.log(err);
throw err;
}else{
console.log("oooo");
}
console.log("send message:"+message);
});
console.log("send m");
client.close();