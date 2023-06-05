const morseCode = require('morse-code-js');
function morse(){
var text = document.getElementById("input")
var morse = morseCode.morseSentence(text);
alert(morse);
}