import java.util.Scanner;

class Amsterdamdistance {
  private static Scanner scanner = new Scanner(System.in);

   static class Plan {
    private int M;
    private int N;
    private double R;
    private double j;

    public Plan(int m, int n, double r) {
      // half-circles
      this.M = m;
      // segments
      this.N = n;
      // radius
      this.R = r;

      this.j = R / N;
    }

    public double distance(int ax, int bx, int ay, int by) {
      double x = Math.min(ay, by);

      double i = (((R / N) * x) * 2 * Math.PI) / (2 * M);

      return (Math.abs(ax - bx) * i) + (Math.abs(by - ay) * j);
    }
  }

  public static void main(String[] args) {
    int M, N, ax, bx, ay, by;
    double R;

    M = scanner.nextInt();
    N = scanner.nextInt();
    R = scanner.nextDouble();

    ax = scanner.nextInt();
    ay = scanner.nextInt();
    bx = scanner.nextInt();
    by = scanner.nextInt();


    Plan plan = new Amsterdamdistance.Plan(M, N, R);

    System.out.println(plan.distance(ax, bx, ay, by));
  }
}