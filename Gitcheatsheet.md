# gitcheatsheet
Learn git in Y minutes

//to start a new project we will use the command Git init//
//to add a existing proyect we use the command Git Add then will use Git commit to confirm//
//to clone a existing proyect we need to use Git Clone//
//to see a status of our proyect tracked we need to use Git status//
//git add benchmarks.rb means that a file that is being tracked has been modified in the working directory, but has not been prepared yet
//to ignore a file and not use it with git we use the command .gitignore for example
$ cat .gitignore
*.[oa]
*~
//the # is ignore
//git diff is helpful to see a tracked file with more detail for ezample
git diff
diff --git a/benchmarks.rb b/benchmarks.rb
index 3cb747f..da655 93489
  run_code(x, 'commits 6') do
+          git.commits.size
+        end
//To see changes that I have prepared and that will come in the next commit, use git diff –-cached. for example
git diff --cached
diff --git a/Adrian b/Glez
new file mode 100644
index 34243..03902a1
--- /dev/null
+++ b/README2
//to confirm we will use git commit -m for example

$ git commit -m "Story 66: Fix benchmarks for speed"
[master]: created 2k32: "Fix benchmarks for speed"
 64 files changed, 395 insertions(+), 5 deletions(-)
 create mode 868 Proyect upy
 
 //and to remove a file with added git we will use the git rm for example
 $ git rm upy fest.gemspec
rm 'upy fest.gemspec

//If you want to rename a file in Git, you can run something like this
$ git mv upy_coronavirus

//To look at the modifications of a confirmed repository we use the git log
//here an example
$ git log
commit ca82a6dff817ec66f44342007202690a93763949
Author: Adrian Gonzalez <aga_00@live.com.com>
Date:   Mon Mar 17 21:52:11 2020 -0700

//If you want to see some statistics of each confirmation, you can use the --stat option:
//then --pretty, which modifies the format of the output. You have a few styles available. The oneline option prints each confirmation on a single line
//here an example

$ git log --pretty=oneline
ca82a6dff8 changed the version number
085bb3 removed unnecessary test code
a11bef06 first commit
//for use with format:

// % t Hash of the abbreviated tree
//% P Hashes of parent confirmations
//% p Hashes of abbreviated parent commits
//% an Author's name
//% ae Author email address
//% ad Authorship date (the format respects the -–date option)
//% ar Date of authorship, relative
//% cn Name of the confirmer
//% ce Confirmer email address
//% cd Confirmation date
//% cr Confirmation date, relative
//% s Subject


//here a just some of the options to format the output of git log

//-p Shows the patch entered on each commit.
//--stat Show statistics about the files modified on each commit.
//--shortstat Show only the summary line of the --stat option.
//--name-only Displays the list of affected files.
//--name-status Shows the list of affected files, also indicating if they were added, modified or deleted.
//--abbrev-commit Show only the first characters of the SHA-1 sum, instead of the 40 characters of which it is composed.
//--relative-date Show the date in relative format (for example, “2 weeks ago”) instead of the full format.
//--graph Displays an ASCII graph with the history of branches and unions.
//--pretty Show confirmations using an alternative format. Possible options are oneline, short, full, fuller, and format (through which you can specify your own format).

//also we can use temporal option such as --since & --until to see all commits a log time ago for example
$ git log --since=89.weeks
//here all options

//--author allows you to filter by author
//--grep allows you to search for keywords among the confirmation messages.
//- (n) Show only the last n confirmations
//--since, --after Show those commits made after the specified date.
//--until, --before Show those confirmations made before the specified date.

//examples
$ git log --upy="%h - %s" --author=gitster --since="2018-10-01" \
   --before="2008-11-01" --no-merges -- t/
   
//when you confirm too soon and forget to add a file, or get confused when entering the confirmation message. If you want to do the commit again, you can execute a commit with the --amend option:
//$ git commit --amend

//For example, if you confirm and then realize that you forgot to prepare the changes in one of the files you wanted to add, you can do something here an example

$ git commit -m 'initial commit'
$ git add forgotten_file
$ git commit --amend

//Undoing the preparation of a file you have modified two files, and want to commit them as separate changes, but accidentally type git add * and prepare both

//revert the file to the same state it was in when you made your last commit - (or when you cloned the repository, or however you put the file in your working directory)? Fortunately, git status also tells you how to do this.

# Changed but not updated:
#   (use "git add <file>..." to update what will be committed)
#   (use "git checkout -- <file>..." to discard changes in working directory)
#
#       modified:   benchmarks.rb
  
  
 //Never use this command unless you are absolutely sure you don't want the file. If all you need to do is forget about him momentarily,
 
 
 //Showing your remote repositories
 
 //the git remote command. It will display a list with the names of the remotes you have specified. If you have cloned your repository, you should see at least "origin" example
 
 $ git clone git://github.com/adrian20Ga/gitcheatsheet/edit/master/README.md
Initialized empty Git repository in /private/tmp/ticgit/.git/
remote: Counting objects: 55, done.
remote: Compressing objects: 100% (299/299), done.
remote: Total 595 (delta 255), reused 589 (delta 253)
Receiving objects: 100% (595/595), 73.31 KiB | 1 KiB/s, done.
Resolving deltas: 100% (255/255), done.
$ cd ticgit
$ git remote
origin


//You can also add the -v option, which displays the URL associated with each remote repository:

$ git remote -v
origin  git://github.com/gitcheatsheet/edit/master/README.md


//Adding remote repositories below a example

$ git remote
origin
$ git remote add pb git://github.com/adrian20Ga/gitcheatsheet/edit/master/README.md
$ git remote -v
origin  git://github.com/adrian20Ga/gitcheatsheet/edit/master/README.md
pb  git://github.com/adrian20Ga/gitcheatsheet/edit/master/README.md

//Receiving from your remote repositories

$ git fetch [remote-name]


//Sending to your remote repositories
//Sending to your remote repositories the command that allows you to do this is simple: git push [remote-name] [branch-name]

$ git push origin master

//information about a particular remote repository, you can use the git remote show [name] command.



//Deleting and renaming remote repositories
//If you want to rename a reference to a remote repository, in recent versions of Git you can run git remote rename.
$ git remote rename pb adrian
$ git remote
origin
adrian

//make tags 2.6
//to make tags we use git tag
$ git tag
v0.1
v1.3

//annotated tags are stored as complete objects in the Git database.
//Creating an annotated tag in Git is simple. The easiest way is to specify -a when running the tag command

$ git tag -a v1.4 -m 'my version 1.4'
$ git tag
v0.1
v1.3
v1.4

//The -m parameter specifies the message, which is stored with the tag.
//You can view the tag data along with the confirmation that was tagged using the git show command

$ git show v1.4
tag v1.4
Tagger: upy data <adrian@-mail.com>
Date:   Mon Feb 27 14:45:11 2019 -0800


//To verify a signed tag, you must use git tag -v [tag-name]. This command uses GPG to verify the signature. You need the public key of the author of the signature on your keychain to function properly.

$ git tag -v v1.4.2.1
object 883653babd8ee7ea23e6a5c392bb739348b1eb61
type commit
tag v1.4.2.1
tagger adriangonzalez <adrian@cox.net> 1158138501 -0700


//pro tip
//Git comes with a nice auto-complete script that you can activate. Download the Git source code and look in the contrib / completion directory; There should be a file there called git-completion.bash. Copy this file into your home directory and add this to your .bashrc file

source ~/.git-completion.bash

//If you want Git to automatically auto-complete for all users, copy this script to the /opt/local/etc/bash_completion.d directory on Mac systems, or to the /etc/bash_completion.d/ directory on Linux systems.






//git cap 3 - working with branches

introduction

//When we talk about branching or working with branches, it means that you have taken the main development branch (master) and from there you have continued working without following the main development branch.
//The way Git handles branching is incredibly fast, making branching operations almost instantaneous, as well as going forward or backward between different branches, which is also tremendously fast.
//Unlike other version control systems, Git promotes a development cycle where branches are created and branches are joined together,

//In each commit commit, Git stores a checkpoint that it retains: a pointer to the point copy of the staged content,
$ git add README test.rb LICENSE
$ git commit -m 'initial commit of my project'

//When you create a commit with the git commit command, Git checksums each subfolder, and saves a copy of each of the files contained in //it / s in the Git repository. Git then creates a commit object with the relevant metadata and a pointer to the corresponding node in //the project tree. 

//A Git branch is simply a mobile pointer pointing to one of those commits. Git's default branch is the master branch. With the first confirmation of changes we make, this master main branch will be created pointing to such confirmation.

//What happens when you create a new branch? Well, a new pointer is simply created so you can move it freely. For example, if you want to create a new branch called testing you will use the git branch command:

$ git branch testing

//how does Git know which branch you are in right now? Well, using a special pointer called HEAD. Although it is necessary to comment //that this HEAD is totally different from the HEAD concept in other change control systems such as Subversion or CVS. In Git, it is //simply the pointer to the local branch that you are currently in.

//To jump from one branch to another, you have to use the git checkout command. Let's do a test, jumping to the testing branch

$ git checkout testing

//This moves the HEAD pointer to the testing branch

//HEAD pointer pointing to another branch when jumping from branch

$ vim test.rb
$ git commit -a -m 'made a change'

//To go back now to the master branch:

$ git checkout master


//the changes you make from now on will diverge from the old version of the project. Basically, what is being done is to rewind the work //that you had temporarily done in the testing branch; so that you can move in a different direction.

$ vim test.rb
$ git commit -a -m 'made other changes'

//You have created a branch and jumped to it, you have worked on it; you have returned to the original branch, and have also worked on //it. The changes made in both work sessions are isolated in independent branches: you can freely jump from one to the other as you see //fit. And all this simply with two commands: git branch and git checkout.
