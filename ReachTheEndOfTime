public static String reachTheEnd(List<String> grid, int maxTime) {
    int rows = grid.size();
    int cols = grid.get(0).length();

    boolean[][] visited = new boolean[rows][cols];
    Queue<int[]> queue = new LinkedList<>();
    queue.offer(new int[]{0, 0, 0}); // (row, col, time)

    while (!queue.isEmpty()) {
        int[] current = queue.poll();
        int r = current[0];
        int c = current[1];
        int time = current[2];

        if (r == rows - 1 && c == cols - 1) {
            if (time <= maxTime) {
                return "Yes";
            } else {
                return "No";
            }
        }

        if (r >= 0 && r < rows && c >= 0 && c < cols && !visited[r][c] && grid.get(r).charAt(c) == '.') {
            visited[r][c] = true;
            queue.offer(new int[]{r + 1, c, time + 1});
            queue.offer(new int[]{r - 1, c, time + 1});
            queue.offer(new int[]{r, c + 1, time + 1});
            queue.offer(new int[]{r, c - 1, time + 1});
        }
    }

    return "No";
}
