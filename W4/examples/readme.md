# Examples

Create example subdirectory here.

Steps to contribute:

```bash
# 1. Clone repository
git clone https://version.lab.fi/at00ck34-3003/c_examples
# 1.1 Change to the repository dir Examples
cd c_examples
# 1.2 Fork repository
git remote add my_upstream https://version.lab.fi/myprojects/EXAMPLE_NAME_HERE
# 2. Create feature-branch
git checkout -b feature-EXAMPLE_NAME_HERE
# 3. Start coding
# 3.1 Create example dir
mkdir examples/EXAMPLE_NAME_HERE
# 3.2 Create .c and .h files
touch examples/EXAMPLE_NAME_HERE/MY_EXAMPLE.{c,h}
# 3.3 Write code
code examples/EXAMPLE_NAME_HERE/MY_EXAMPLE.c
code examples/EXAMPLE_NAME_HERE/MY_EXAMPLE.h
# 5. Commit changes
git status # Check pending changes
git add . # Add changes to the staging zone
git commit -m "[EXAMPLE_NAME_HERE] complete" # Save stage zone files to commit
git status # Check git tree status
git log # Check git commit logs => Q to exit
git remote -v # check remote origin address
git push -u my_upstream feature-EXAMPLE_NAME_HERE # Push changes to the remote.
# 6. Create pull request in version.lab.fi
```