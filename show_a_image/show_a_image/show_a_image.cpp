// show_a_image.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"highgui.h"
#include<stdio.h>
int _tmain(int argc, _TCHAR* argv[])
{
	cvNamedWindow("WJX",1);
	CvCapture *capture = cvCreateFileCapture("beyond.avi");
	IplImage *frame;
	while (1)
	{
		frame = cvQueryFrame(capture);
		if (!frame)
		{
			printf("error\n");
			break;
		}
		cvShowImage("WJX",frame);
		char c = cvWaitKey(33);
		if (c==27)
		{
			break;
		}
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow("WJX");
}

