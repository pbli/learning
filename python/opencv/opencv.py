import cv2 as cv
import sys
import numpy as np 


#20210717
img = cv.imread("che.JPG")
width, height = 1000, 1000
pts1 = np.float32([[111,219],[287, 188], [154,482],[352,440]])
pts2 = np.float32([[0,0],[width, 0],[0, height],[width,height]])

matrix = cv.getPerspectiveTransform(pts1,pts2)
imgOutput = cv.warpPerspective(img, matrix, (width,height))

cv.imshow("img", img)
cv.imshow("output", imgOutput)

cv.waitKey(0)

exit(0)


# Drawing
img=np.zeros((512,512,3), np.uint8)
cv.line(img, (0,0),(512,512),(0,255,255),3)
cv.rectangle(img, (100,100), (5000,5000), (0,255,0),2)

cv.rectangle(img, (100,100), (5000,5000), (0,255,0), 2) #cv.FILLED)

cv.circle(img, (250,250), 100, (255,255,255), 1)
cv.putText(img, "Pengbo Li", (100,100), cv.FONT_ITALIC, 1, (125,125,125),3)


cv.imshow("img", img)
k = cv.waitKey(0)
exit(0)



# Shape adjustment
che = cv.imread("che.JPG")
if che is None:
    sys.exit("Could not read the image.")

cv.imshow("che", che)

print(che.shape)
imgResize = cv.resize(che, (200,200))

cv.imshow("cheResized", imgResize)
imgCropped = che[0:100, 10:200]
cv.imshow("imgCropped", imgCropped)

k = cv.waitKey(0)
exit(0)


# Edge detection
cheEdge = cv.Canny(che, 150, 200)
k=np.ones((5,5), np.uint8)
Edge2 = cv.dilate(cheEdge, k, iterations=1)
Edge3 = cv.erode(Edge2, k, iterations=1)


cv.imshow("edge", cheEdge)
cv.imshow("edge2", Edge2)
cv.imshow("edge3", Edge3)



# Video capture
#cap = cv.VideoCapture("mao.Mov")
cap = cv.VideoCapture(0);

while True:
    success, mao=cap.read()
    mao1 = cv.cvtColor(mao, cv.COLOR_BGR2GRAY)
    mao2 = cv.GaussianBlur(mao, (7, 7), 0)
    cv.imshow("Mao", mao)
    cv.imshow("Mao1", mao1)
    cv.imshow("Mao2", mao2)
    if cv.waitKey(1) & 0xFF==ord('q'):
        break
