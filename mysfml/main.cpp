#include<iostream>
#include "Game.h"

using namespace std;

int main() {
	
	Game game;
	//cout << "Current Screen: " << Game::currentScreen << endl;
		
	while (game.ifWindowOpen()) {
		
		game.update();
		game.render();

	}

	//cout << "Current Screen: " << Game::currentScreen << endl;
	return 0;
}

