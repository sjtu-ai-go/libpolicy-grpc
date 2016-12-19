
#!/usr/bin/bash
echo "Install protoc first"
protoc -I. --cpp_out=cpp ./message.proto
