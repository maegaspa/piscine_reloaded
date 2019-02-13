ifconfig -a | grep -o "ether.*" | sed '2d' | tr -d '\t' | cut -c7- | tr -d ' '
