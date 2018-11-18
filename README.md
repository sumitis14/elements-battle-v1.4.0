# elemental-battles(v1.4.0)

##
1. frontend setup
2. `L2/L4/L5` contains code from lessons from EB repo.
3. `contract-code-final` is the one that needs to be compiled and deployed

## Running instructions
1. Make sure you create an account in Jungle net
2. Add the account name in .env file inside frontend directory
3. Download package.json:\
`curl -sS https://raw.githubusercontent.com/EOSIO/eosio-card-game-repo/lesson-8/frontend/package.json > package.json` 
4. Frontend
```
4.1 Run first_time_setup.sh when using it for the first time.
4.2 To start frontend : use start_frontend.sh
```


## Contract compile and setting to jungle net
1. create devnet/jungle net account:\
`cleos create account eosio <account_name> <OWNER PUBLIC KEY>`

2. Get some faucets and buy some ram:\
`cleos -u http://jungle.cryptolions.io:18888 system buyram <account_name> <account_name> "4 EOS"` 

3. Setting contract in jungle net:\
` cleos -u http://jungle.cryptolions.io:18888 set contract <account_name> ../<CONTRACT_DIR> cardgame.wasm cardgame.abi`

4. Start the frontend and login using the created account


