import sys

n = int(sys.stdin.readline().rstrip())
sales_list = [sys.stdin.readline().rstrip() for i in range(n)] # 판매한 책 리스트
books = list(set(sales_list)) # 판매 리스트에서 중복 책 제거한 리스트
books.sort() # 사전 순 정렬
best_count = 0 # 베스트 셀러 판매 수

for book in books :
    if sales_list.count(book) > best_count : # 현재 가장 많이 팔렸다고 가정한 책보다 더 많이 팔린 책인 경우
        best_count = sales_list.count(book) # count 갱신
        best_seller = book #best seller 갱신
        
print(best_seller)