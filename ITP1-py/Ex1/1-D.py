s = int(input())

"""""
if s >= 3600:
    h = s // 3600
    s %= 3600
    if s >= 60:
        m = s // 60
        s %= 60
    else:
        m = 0
else:
    h = 0
    m = s // 60
    s %= 60
print(f"{h}:{m}:{s}")
"""""
h = s // 3600
m = (s % 3600) // 60
s = s % 60
print(f"{h}:{m}:{s}")