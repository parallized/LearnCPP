struct Player {
	char name[12];
	int level;
	int health;
};

struct Game {
	Player* player;
};
