var name= prompt("Enter your name:");
var cap=name.slice(0,1);
var remain=name.slice(1,name.length);
alert(cap);
var upper=cap.toUpperCase();
alert("Hello "+upper+remain );
