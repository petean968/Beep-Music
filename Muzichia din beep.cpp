// Muzichia din beep.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <Windows.h>
#include <vector>

enum Freq {rest=0,C4=261,Cd4=277,D4=293,Dd4=311,E4=329,
		  F4=349,Fd4=369,G4=392,Gd4=415,A4=440,Ad4=466,B4=493};
enum Time {a16a=200,a8a=(a16a<<1),a4a=(a8a<<1),a2a=(a4a<<1) };

class Nota {
public:
	Nota (unsigned int Freq,unsigned int Time) : fF(Freq),fT(Time) {}
	unsigned int fF;
	unsigned int fT;

	void Play()
	{
		if (fF > 0)
		{
			Beep(fF, fT);
		}
		else
		{
			Sleep(fT);

		}
	}
};
class Melody {
public:
	std::vector<Nota>Notele;
	void PuneNota(int Freq, int Time)
	{
		Notele.push_back(Nota(Freq, Time));
	}
	void play()
	{
		std::vector<Nota>::iterator num;

		for (num = Notele.begin(); num != Notele.end(); num++)
		{
			num->Play();//(*num).Play;
		}



	}
};
int main()
{
	Melody MyMelody;
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);
	MyMelody.PuneNota(Ad4, a4a, A4, a4a, Ad4, a4a, G4);


	MyMelody.play();

	return 0;

	
	

}