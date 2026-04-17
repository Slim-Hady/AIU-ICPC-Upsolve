import sys

def solve():
    s = sorted(input().strip())
    n = len(s)
    used = [False] * n
    res = []
    curr = []

    def backtrack():
        if len(curr) == n:
            res.append("".join(curr))
            return
        
        for i in range(n):
            if used[i]: continue
            if i > 0 and s[i] == s[i-1] and not used[i-1]: continue
            
            used[i] = True
            curr.append(s[i])
            backtrack()
            
            # Backtrack
            curr.pop()
            used[i] = False

    backtrack()
    print(len(res))
    for p in res:
        print(p)

if __name__ == "__main__":
    solve()
