#!/bin/bash

docker run -p 127.0.0.1:8888:8888 -v "$(pwd)":/workspace jupytercontainer:latest
