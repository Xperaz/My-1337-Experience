ifconfig | grep ether | sed 's/^.ether//' | sed '/^.media/d' | tr -d " "
