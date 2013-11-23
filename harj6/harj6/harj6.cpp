/*********
Teht‰v‰: Harjoitus 6
Tekij‰: Joni Laine
PVM: 17.9.2013

Kuvaus:
Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.
*********/

#include <iostream>
using namespace std;

int main ()
{
	float luku1;
	float luku2;

	cout <<"Paljonko on rahaa? ";
	cin >>luku1;
	cout <<"Lihapiirakan hinta? ";
	cin >>luku2;

	if (luku1>luku2)
		cout <<"Rahaa jÑljellÑ: " <<luku1-luku2 <<endl;
	else if (luku1<luku2)
		cout <<"Sinulla ei ole varaa lihapiirakkaan";
}
	
