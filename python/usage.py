#!/usr/bin/python2
import message_pb2

from random import random

request = message_pb2.RequestV1()
request.board_size = 19
for i in range(19*19):
    request.our_group_lib1.append(True)
request.our_group_lib1[15] = False

response = message_pb2.ResponseV1()
response.board_size = 19
for i in range(19 * 19):
    response.possibility.append(random())
