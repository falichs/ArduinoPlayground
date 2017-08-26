/*
  FexMax7219.h - Library for communicating with a MAX7219.
  Created by Felix Kreuzer, March 30, 2017.
  Released into the public domain.
*/

#ifndef FexMax7219_h
#define FexMax7219_h

class FexMax7219
{
	public:
		FexMax7219(int pinLOAD, int pinCLK, int pinDATA);
		void sendChar(char c, byte digitnum);
		void setIntensity(byte level);
		void shutdown();
		void startup()
	private:
		int _pinLOAD;
		int _pinCLK;
		int _pinDATA;
		void serialSend(byte address, byte data);
		byte decodeChar(char c);
}

#endif