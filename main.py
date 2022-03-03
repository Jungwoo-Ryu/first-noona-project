 from tkinter import *
  ## 윈도우 창을 만드는 외부 기능(tkinter라는 라이브러리) 가져오기
  ​
  ## 변수 ##
  window = None
  canvas = None
  ​
  x1,y1,x2,y2 = None, None, None, None
  ​
  ## 함수 ##
  ​
  def mouseClick(event):
      global x1,y1,x2,y2
      x1=event.x
      y1=event.y
  ​
  ## 함수의 매개변수 event는 마우스를 클릭한 순간의 정보(좌표)를 가지고 있음.
      
  def mouseDrop(event):
      global x1,y1,x2,y2
      x2=event.x
      y2=event.y
      #이 시점에 선이 그려짐->선 그리기 실행되는 코드 작성해줌
      canvas.create_line(x1,y1,x2,y2, width=5, fill="red")
      
  ​
  ## 메인 코드 ##
  window = Tk()
  #윈도우가 나오게 해줌
  window.title("그림판 비슷한 프로그램")
  canvas=Canvas(window, height=300, width=300)
  ​
  canvas.bind("<Button-1>", mouseClick)
  canvas.bind("<ButtonRelease-1>", mouseDrop)
  ##<Button-1>은 마우스 버튼을 클릭하는 이벤트, mouseClick()함수를 호출
  ##<ButtonReleas-1>은 마우스 드롭하는 이벤트
  ​
  canvas.pack()
  window.mainloop()
  