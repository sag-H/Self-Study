""""code doesn't work - unclear assignment"""
def checkMix(lst):
    mixed = False
    for i in range(len(lst) - 1):
        if type(lst[i]) is int or float and type(lst[i + 1]) is str:
            mixed = True
    return mixed

def summer(lst1, lst2=[]):
    if checkMix(lst1):
        lst1 = ''.join(map(str, lst1))
        lst2 = ''.join(map(str, lst2))
    if not lst2:
        print(sum(lst1))

l1 = ['a', 'aa', 'bb', 'cc']
l2 = [1, 'aa', 'bb', 'cc']
l3 = [10, 11, 12, 0.75]
l4 = [True, False, True, True]

summer(l1,l4)
