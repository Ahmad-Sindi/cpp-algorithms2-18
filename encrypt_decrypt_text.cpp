/* Algorithm Challenge & Problem Solving
 * 18 - Encrypt and Decrypt Text (Caesar Shift)
 *
 * This program reads a text string from the user and applies a simple
 * Caesar-style encryption by shifting each character forward by a fixed key.
 * Decryption simply reverses this process by shifting characters backward
 * using the same key.
 *
 * Encryption:
 *   NewChar = OriginalChar + Key
 *
 * Decryption:
 *   OriginalChar = EncryptedChar - Key
 *
 * This demonstrates basic text manipulation, ASCII arithmetic,
 * and the fundamentals of symmetric encryption.
 */

#include <iostream>
#include <string>
using namespace std;

// Reads a line of text from the user
string ReadText()
{
    string Text;
    cout << "Enter Your Text:\n";
    getline(cin, Text);
    return Text;
}

// Encrypts text by shifting each character forward by Encryption_Key
string EncryptText(string Text, short Encryption_Key)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) + Encryption_Key); // Shift ASCII value
    }
    return Text;
}

// Decrypts text by shifting characters back by Encryption_Key
string DecryptText(string Text, short Encryption_Key)
{
    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char(int(Text[i]) - Encryption_Key); // Reverse shift
    }
    return Text;
}

int main()
{
    const short Encryption_Key = 2; // The encryption/decryption key

    string Text = ReadText();

    string TextAfterEncryption = EncryptText(Text, Encryption_Key);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, Encryption_Key);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0;
}
