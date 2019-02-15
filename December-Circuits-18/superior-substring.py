def get_all_substrings(input_string):
    length = len(input_string)
    return [input_string[i:j + 1] for i in range(length)for j in range(i, length)]


x = get_all_substrings('ababbbacbcbcca')

s = 'ababbbacbcbcca'
maxi = 0
for i in range(len(x)):
    s_d = {}
    s_s = set(x[i])
    s_d = dict.fromkeys(s_s, 0)
    for j in x[i]:
        s_d[j] = s_d[j] + 1

    if(max(s_d.values()) >= len(s)//2 and sum(s_d.values()) > maxi):
        #maxi = sum(s_d.values())
        print(sum(s_d.values()))
    # print(s_d)
    # print(i)
print(maxi)
