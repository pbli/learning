import cv2
import numpy as np

img1 = cv2.imread("opencv/redcar.jpg")
cv2.imshow("che", img1)
img  = cv2.cvtColor(img1, cv2.COLOR_BGR2GRAY)
imgs = np.hstack((img, img))
imgv = np.vstack((img, img))
cv2.imshow("joined", imgs)
cv2.imshow("v", imgv)


cv2.waitKey(0)
exit(0)