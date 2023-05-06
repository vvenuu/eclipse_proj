# eclipse_proj
# this is new project pushed from test1 local working directory to remote repositor without clone.
#step 1 : move from current working directory to your local project directory
#step 2 : initialize an empty git repository branch to master 
  git init -b master
#step 3 : add the project files and folders to git repository by 
  git config --global --add safe.directory C:/Users/vvenu/eclipse-workspace/test1
#step 4: git commit -m "first before push commit" 
#step 5: set the current local repo to be pushed remote repo for exampl here test1 local repo to be pushed ecliops_proj
 git remote add origin https://github.com/vvenuu/eclipse_proj.git
#step 6: check whether points to remote repo is as we required
 git remote -v
#step 7: Now we are ready to push the local repo to remote repo forcefully
 git push -f origin master
 
 Thats all folks enjoy now local project is moved to remote repo


