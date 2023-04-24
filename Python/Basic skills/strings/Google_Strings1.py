# A. donuts
# Given an int count of a number of donuts, return a string
# of the form 'Number of donuts: <count>', where <count> is the number
# passed in. However, if the count is 10 or more, then use the word 'many'
# instead of the actual count.
# So donuts(5) returns 'Number of donuts: 5'
# and donuts(23) returns 'Number of donuts: many'


def donuts(count):
    if count >= 10:
        return "Number of donuts: many"
    else:
        return f"Number of donuts: {count}"


# B. both_ends
# Given a string s, return a string made of the first 2
# and the last 2 chars of the original string,
# so 'spring' yields 'spng'. However, if the string length
# is less than 2, return instead the empty string.


def both_ends(s):
    if len(s) < 2:
        return ""
    else:
        return s[:2] + s[-2:]


# C. fix_start
# Given a string s, return a string
# where all occurrences of its first char have
# been changed to '*', except do not change
# the first char itself.
# e.g. 'babble' yields 'ba**le'
# Assume that the string is length 1 or more.
# Hint: s.replace(stra, strb) returns a version of string s
# where all instances of stra have been replaced by strb.


def fix_start(s):
    first = s[0]
    s = s.replace(s[0], "*")
    s = list(s)
    s[0] = first
    return "".join(s)


# D. MixUp
# Given strings a and b, return a single string with a and b separated
# by a space '<a> <b>', except swap the first 2 chars of each string.
# e.g.
#   'mix', pod' -> 'pox mid'
#   'dog', 'dinner' -> 'dig donner'
# Assume a and b are length 2 or more.


def mix_up(a, b):
    a = list(a)  # [d,o,g]
    b = list(b)  # [d,i,n,n,e,r]

    newa = (b[:2])
    newa = "".join(newa)  # di
    resta = a[2:]
    resta = "".join(resta)  # g
    newa = newa + resta  # dig

    newb = (a[:2])
    newb = "".join(newb)
    restb = b[2:]
    restb = "".join(restb)
    newb = newb + restb

    return newa + " " + newb


# E. verbing
# Given a string, if its length is at least 3,
# add 'ing' to its end.
# Unless it already ends in 'ing', in which case
# add 'ly' instead.
# If the string length is less than 3, leave it unchanged.
# Return the resulting string.


def verbing(s):
    if len(s) < 3:
        return s

    elif not s[-3:] == "ing":
        return s + "ing"

    elif s[-3:] == "ing":
        s = list(s)
        s.append("ly")
        return "".join(s)
    else:
        s = list(s)
        s.append("ing")
        return "".join(s)


# F. not_bad
# Given a string, find the first appearance of the
# substring 'not' and 'bad'. If the 'bad' follows
# the 'not', replace the whole 'not'...'bad' substring
# with 'good'.
# Return the resulting string.
# So 'This dinner is not that bad!' yields:
# This dinner is good!


def not_bad(s):
    if s.index("not") < s.index("bad"):
        start = s.index("not")
        end = s.index("bad") + 2
        s = list(s)

        for i in range(end - start + 1):
            s.pop(start)

        s.insert(start, "good")
        s = "".join(s)
        return s


# G. front_back
# Consider dividing a string into two halves.
# If the length is even, the front and back halves are the same length.
# If the length is odd, we'll say that the extra char goes in the front half.
# e.g. 'abcde', the front half is 'abc', the back half 'de'.
# Given 2 strings, a and b, return a string of the form
#  a-front + b-front + a-back + b-back


def front_back(a, b):
    if len(a) % 2 == 0:
        front_a = a[:len(a) // 2]
        back_a = a[len(a) // 2:]
    else:
        back_a = a[len(a) // 2:]
        front_a = a[:len(a) // 2] + back_a[0]

    if len(b) % 2 == 0:
        front_b = b[:len(b) // 2]
        back_b = b[len(b) // 2:]
    else:
        back_b = b[len(b) // 2:]
        front_b = b[:len(b) // 2] + back_b[0]

    return front_a + front_b + back_a + back_b


# Provided simple test() function used in main() to print
# what each function returns vs. what it's supposed to return.


def test(got, expected):
    if got == expected:
        prefix = ' OK '
    else:
        prefix = '  X '
    print('%s got: %s expected: %s' % (prefix, repr(got), repr(expected)))


# Provided main() calls the above functions with interesting inputs,
# using test() to check if each result is correct or not.
def main():
    print('donuts')
    # Each line calls donuts, compares its result to the expected for that call.
    test(donuts(4), 'Number of donuts: 4')
    test(donuts(9), 'Number of donuts: 9')
    test(donuts(10), 'Number of donuts: many')
    test(donuts(99), 'Number of donuts: many')

    print
    print('both_ends')
    test(both_ends('spring'), 'spng')
    test(both_ends('Hello'), 'Helo')
    test(both_ends('a'), '')
    test(both_ends('xyz'), 'xyyz')

    print
    print('fix_start')
    test(fix_start('babble'), 'ba**le')
    test(fix_start('aardvark'), 'a*rdv*rk')
    test(fix_start('google'), 'goo*le')
    test(fix_start('donut'), 'donut')

    print
    print('mix_up')
    test(mix_up('mix', 'pod'), 'pox mid')
    test(mix_up('dog', 'dinner'), 'dig donner')
    test(mix_up('gnash', 'sport'), 'spash gnort')
    test(mix_up('pezzy', 'firm'), 'fizzy perm')

    print('verbing')
    test(verbing('hail'), 'hailing')
    test(verbing('swiming'), 'swimingly')
    test(verbing('do'), 'do')

    print
    print('not_bad')
    test(not_bad('This movie is not so bad'), 'This movie is good')
    test(not_bad('This dinner is not that bad!'), 'This dinner is good!')
    test(not_bad('This tea is not hot'), 'This tea is not hot')
    test(not_bad("It's bad yet not"), "It's bad yet not")

    print
    print('front_back')
    test(front_back('abcd', 'xy'), 'abxcdy')
    test(front_back('abcde', 'xyz'), 'abcxydez')
    test(front_back('Kitten', 'Donut'), 'KitDontenut')


# Standard boilerplate to call the main() function.
if __name__ == '__main__':
    main()
