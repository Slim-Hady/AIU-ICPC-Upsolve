import sys

def solve():
    input = sys.stdin.read().split()
    if not input:
        return
    
    T = int(input[0])
    ptr = 1
    results = []

    for _ in range(T):
        N = int(input[ptr])
        K = int(input[ptr + 1])
        ptr += 2
        a = list(map(int, input[ptr : ptr + N]))
        ptr += N

        max_len = 0
        for i in range(N):
            cur_min = a[i]
            cur_max = a[i]
            for j in range(i, N):
                if a[j] < cur_min: cur_min = a[j]
                if a[j] > cur_max: cur_max = a[j]
                
                if cur_max - cur_min <= K:
                    length = j - i + 1
                    if length > max_len:
                        max_len = length
                else:
                    break
        results.append(str(max_len))
    
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()
