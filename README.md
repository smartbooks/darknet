![Darknet Logo](http://pjreddie.com/media/files/darknet-black-small.png)

#Darknet#
Darknet is an open source neural network framework written in C and CUDA. It is fast, easy to install, and supports CPU and GPU computation.

For more information see the [Darknet project website](http://pjreddie.com/darknet).

For questions or issues please use the [Google Group](https://groups.google.com/forum/#!forum/darknet).

# util cmd

```bash

https://zhuanlan.zhihu.com/p/57613816
https://pjreddie.com/darknet/yolo/

brew install opencv@2

If you need to have opencv@2 first in your PATH run:
  echo 'export PATH="/usr/local/opt/opencv@2/bin:$PATH"' >> ~/.zshrc

For compilers to find opencv@2 you may need to set:
  export LDFLAGS="-L/usr/local/opt/opencv@2/lib"
  export CPPFLAGS="-I/usr/local/opt/opencv@2/include"

For pkg-config to find opencv@2 you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/opencv@2/lib/pkgconfig"

make

wget https://pjreddie.com/media/files/yolov3.weights

./darknet detect cfg/yolov3.cfg cfg/yolov3.weights data/dog.jpg

```
