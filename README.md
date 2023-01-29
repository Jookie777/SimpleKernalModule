# SimpleKernalModule

This is a simple kernal module I wrote that prints out "Hello World" when it is inserted into th kernal, and prints out "Goodbye!" when it gets removed.
Below is the instruction on how to correctly run the module and see the output using a virtual machine that Priyal provides.






## Step 1: Clone the repository:

1.1 Install git using sudo access permision:

```sudo apt install git```

1.2 Clone the repo

```git@github.com:Jookie777/SimpleKernalModule.git```

If this doesn't work due to the ssh key authentication, try using the HTTPS URL instead of the SSH/git URL to avoid having to deal with SSH keys




## Step 2: Install tools that are needed to compile and run the kernal module:

2.1: Install GCC to be able to compile the c file:

```sudo apt install build-essential```

Use `gcc -v` to verify you have a valid gcc version downloaded.

2.2: Install `make` to be able to use the Makefile:

```sudo apt install make```

2.3 Install any text editor you like if you want to make some changes to the source file:

Here's the command if you want to use `Emacs` to edit the file:

```sudo snap install emacs --classic```


## Step 3: Now that you have all the tools needed, we need one more step to run the kernal module that is download the correct kernal version.
3.1: Find the correct kernal version number:

```uname -a```

3.2: Download the kernal version with it's corresponding generic file:

```sudo apt-get install linux-headers-<the version number from step 3.1>```

```sudo apt-get install linux-headers-<the version number from step 3.1>-generic```

3.3: You might run into an error page saying dkpg was interrupted. If so, run the following command:

```sudo dpkg --configure -a```


## Step 4: Now it's time to run the module!

4.1: Run Makefile

```make```

4.2: Use the sudo access to insert the module (file hello.ko we generated using make)

```sudo insmod hello.ko```

4.3: Then you will be able to see the kernal name (hello) if you list the running modules using:

```lsmod```

4.4: See the message it prints when the module is inserted into the kernal:

```dmesg```

If you run into this error message: "read kernel buffer failed: Operation not permitted". Run this command to give you the acess:

```sudo sysctl kernel.dmesg_restrict=0```

4.5: Then remove the module

```sudo rmmod hello```

4.6: Then you will be able to see the kernal name (hello) no longer exists if you list the running modules using:

```lsmod```

4.7: See the message it prints when the module is removed from the kernal:

```dmesg```


