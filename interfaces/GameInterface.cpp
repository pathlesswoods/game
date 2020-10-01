//Generic Game Interface
//Needs to be inherited by specific game class.


class GameInterface {
    public:
        // Returns max number of players that can play this game
        int getMaxPlayers()
        {
            return maxPlayers;
        }

        // Returns min number of players needed to play this game
        int getMinPlayers(){
            return minPlayers;
        }


    protected:

        //Protected member variables
        int maxPlayers;
        int minPlayers;


};
