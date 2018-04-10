## Routers, ips, ....

### Conceptos

IPs, puertos

Router, bridge, AP

LAN

WAN

NAT

DMZ

### Explorar una red

    ifconfig


Suponiendo que obtenemos una ip del estilo 192.168.1.x

    nmap -sP 192.168.1.*


Otra opción

    ping -b 192.168.1.255

    arp -a
