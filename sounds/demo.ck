SinOsc s => dac;

while( true ) {
    100::ms => now;
    Math.random2f(30.0, 1000.0) => s.freq;
}
