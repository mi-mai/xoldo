Hi guys,

this archive contains several apps and batch files.

0 - Useful files

xoldod.exe - coin's daemon
xoldow.exe - classic wallet app
xoldop.exe - payments gate [wallet for exchanges] app
xoldowhd.exe - HD-wallet app
xoldom.exe - CPU solo miner app

new-wallet.bat - batch file to generate new wallet
daemon.bat - batch file to start coin's daemon
wallet.bat - batch file to start wallet app with your wallet file and password
miner.bat - batch file to run mining

1 - First step - Generating new wallet

Edit new-wallet.bat file, change the name and location of your wallet file as well as password.
Save.
Don't start daemon, but run new-wallet.bat instead.
You will get new wallet file with password supplied as result.

***** WARININGS *****

a. 
Backup *.wallet file ASAP to another pc, remote location of flash drive.

b.
*.wallet.backup.txt file will be created in the working folder along with your new wallet.
This file contains backup copy of your wallet and wallet password.
Store this file in safe place or print it and delete it from working folder, empty recycle bin as well.

*********************

2 - Second - edit miner batch file

Open *.wallet.address file in notepad and copy your XOLDO address to clipboard [Ctrl+C]
Edit miner.bat file, paste just copied address instead of default.
Change number of mining threads if you need.
Save.

3 - Next - prepare wallet batch file

Edit wallet.bat, change the name and location of your wallet file as well as password.
The easiest way is simple copy this params from new-wallet.bat file.
Save.

4 - Start daemon.

Clear cache if you used test version of daemon.
To do this, press [Win+R] key, type %APPDATA%, and delete xoldo folder if you have one.

Run daemon.bat.
Wait to full sync.

If daemon will not find any seed - check your windows firewall and home/office router NAT and firewall rules.
If still failed - ask for assistance at the Discord chat - https://discord.gg/46xpPye

5 - Start mining

If your daemon found any seed and became fully synced - start mining.
Start miner.bat.
Another way - just type:
	start_mining your_xoldo_wallet_address threads_count
inside daemon's app window, where your_xoldo_wallet_address is the same you have in miner.bat file and threads_count - munber of mining threads.

