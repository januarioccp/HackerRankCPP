'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    for(var c in s){
        if( s[c] == 'a' || s[c]== 'e' || s[c]=='i' || s[c]=='o' || s[c]=='u')
        console.log(s[c]);
    }
    for(var c in s){
        if( s[c] != 'a' && s[c]!= 'e' && s[c]!='i' && s[c]!='o' && s[c]!='u')
        console.log(s[c]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}