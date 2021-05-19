def tsp(D):
    N = len(D)
    inf = float('inf')
    ans = inf
    VISITED_ALL = (1 << N) - 1

    def find_path(start, last, visited, tmp_dist):
        nonlocal ans
        if visited == VISITED_ALL:
	    return_home_dist = D[last][start] or inf
            ans = min(ans, tmp_dist + return_home_dist)
            return

        for city in range(N):
            if visited & (1 << city) == 0 and D[last][city] != 0:
                find_path(start, city, visited | (1 << city), tmp_dist + D[last][city])

    for c in range(N):
        find_path(c, c, 1 << c, 0)

    return ans

