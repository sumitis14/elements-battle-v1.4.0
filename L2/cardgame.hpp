#include <eosiolib/eosio.hpp>

using namespace eosio;
using namespace std;

CONTRACT cardgame : public contract {

  private:

    TABLE user_info {
      name    name1;
      uint16_t        win_count = 0;
      uint16_t        lost_count = 0;

      auto primary_key() const { return name1.value; }
    };

    typedef multi_index<name("users"), user_info> users_table;
    users_table _users;

  public:

    cardgame( name receiver, name code, datastream<const char*> ds ) : contract(receiver, code, ds), _users(receiver, receiver.value){} 

    ACTION login(name username);

};