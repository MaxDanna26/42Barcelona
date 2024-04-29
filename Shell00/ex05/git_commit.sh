# Crea un script de shell que muestre en pantalla los id de los últimos 5 commits de
# tu repositorio git.
# %> bash git_commit.sh | cat -e
# baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
# 2f52d74b1387fa80eea844969e8dc5483b531ac1$
# 905f53d98656771334f53f59bb984fc29774701f$
# 5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
# e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
# %>

#!/bin/bash 
git log --format='%H' -n5
