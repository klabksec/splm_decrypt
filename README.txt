Prior to my “Masha and these Bears” presentation at SAS2018, I developed decryptors to dump SPLM/XAgent strings for analysis. 
https://youtu.be/-7RM_jqSf9I
None of this was well organized, qa'd, or maintained. But a few people asked, so I just want to share this stuff as examples of what SPLM crypto looks like, and how/what i was doing to work with it. If it doesn't work, sorry i'm lazy, go ahead and please fix it. The idea is that this is just a learning exercise.

Sofacy's SPLM encryption routines are a custom hack - they are fairly unique to each binary, as described in the presentation. This code is very different from what we see in Zebrocy and Turla code. Anyway, I observed the 80/20 rule to get the work done - pull c2 strings, error messages, parameter keys and more from SPLM modules that I could get my hands on. It decrypts strings for the most part, but might not properly decrypt the initial letter of a given string. 

You might notice that there is a military discipline to these implementations, as opposed to Turla stuff you may get your hands on.

At #TheSAS2020, Igor will provide his god mode training. It’s excellent! You will be inspired to go beyond my 80/20 correctness for reversing tasks like these…"The God-Mode Practical Training in Static Analysis of APT Malware"
https://thesascon.com/training

To run, pull down the associated SPLM module from VT and dump its resource section. Compile and run the appropriate decryptor against the resource dump, pipe the output to a ".dec" file, and then run strings against that output. Voila. 
You can specify the size of data that you want to decrypt. Start from position 0 and go! Example code, example "mostly" decrypted strings, and good wishes are provided. Enjoy!

Oddly, we continue to see light SPLM use in 2020. Thought we were done with this stuff. 


later
