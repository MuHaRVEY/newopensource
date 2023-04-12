
#상의 랭킹 끌어모아서
#엑셀파일에 저장까지
#1차 완료 

import requests
from bs4 import BeautifulSoup
import pandas as pd

request = requests.get("https://www.musinsa.com/categories/item/001") #상의 주소 접속 요청 request 객체 생성

html =request.text.strip() #사이트 접속 후 소스코드를 추출

soup = BeautifulSoup(html,'html.parser') #소스코드를 파이썬 객체로 변환하여 처리 

divs = soup.findAll('p', {"class":"list_info"}) #<p>태그 포함하는 요소를 추출

shirts = [] #옷을 담을리스트

for link in divs:
    links = link.findAll("a")
    for lin in links:
        shirt = lin.get("title")  # title:상의 이름 을 가져와 shirts에 저장.
        if shirt is not None:  # None 값이 아닌 경우에만 리스트에 추가
            shirts.append(shirt)
#print(shirts)

subject = pd.DataFrame(shirts)
print(subject)
subject.to_excel('test.xlsx')

#d
#d
#d
#d

