#!/usr/bin/bash
echo "call pip install grpc-io first"
python -m grpc.tools.protoc --python_out=python  -I . ./message.proto
