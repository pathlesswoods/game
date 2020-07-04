//Generic Game Interface
//Needs to be inherited by specific game class.


class GameInterface {
    public:
        virtual void getMaxPlayers() = 0;
        virtual void setMaxPlayers() = 0;


    protected:

        //Protected member variables
        int MaxPlayers;


};
