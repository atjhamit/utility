sudo mkdir -p /usr/local/src/debian
sudo apt -y install linux-source
sudo cp -v /usr/src/linux-source-*/debian/canonical-*.pem /usr/local/src/debian/
sudo apt -y purge linux-source*
