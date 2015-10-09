
class Vector4{

public:
	float x, y, z, w;

	Vector4(){}

	Vector4(float nx, float ny, float nz, float nw) :x(nx), y(ny), z(nz), w(nw){}

	Vector4(const Vector4& v) :x(v.x), y(v.y), z(v.z), w(v.z){}

	Vector4& operator=(const Vector4& rhs){
		x = rhs.x; y = rhs.y; z = rhs.z; w = rhs.w;
		return *this;
	}

	bool operator==(const Vector4& rhs) const{
		return x == rhs.x && y == rhs.y && z == rhs.z && w == rhs.w;
	}

	bool operator!=(const Vector4& rhs) const{
		return x != rhs.x || y != rhs.y || z != rhs.z || w != rhs.w;
	}

};