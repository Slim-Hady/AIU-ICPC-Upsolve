import sys

def solve():
    input = sys.stdin.read().split()
  
    T = int(input[0])
    idx = 1
    results = []
    
    for _ in range(T):
        N = int(input[idx])
        K = int(input[idx+1])
        M = int(input[idx+2])
        idx += 3
        
        total_claps = 0
        last_clap = -1
        
        for i in range(1, N + 1, K):
            if i % M != 0:
                total_claps += 1
                last_clap = i
        
        if total_claps == 0:
            results.append("0 -1")
        else:
            results.append(f"{total_claps} {last_clap}")
            
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()
