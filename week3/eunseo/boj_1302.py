n = int(input())

books = {}

for _ in range(n):
    book=input()
    if(book not in books):
        books[book]=1 
    else:
        books[book]+=1 


max_count = max(books.values())


best_books=[]

for book, number in books.items():
    if number == max_count:
        best_books.append(book)

print(sorted(best_books)[0])