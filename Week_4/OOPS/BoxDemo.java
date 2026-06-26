class Box {
    protected double length;
    protected double breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    private double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

public class BoxDemo {
    public static void main(String[] args) {
        Box box = new Box(10, 5);

        System.out.println("Area of Box = " + box.area());

        Box3D box3d = new Box3D(10, 5, 8);

        System.out.println("Volume of Box3D = " + box3d.volume());
    }
}