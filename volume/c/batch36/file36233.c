// fichero 36233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36233;

Registro36233 crear_registro36233(int id) {
    Registro36233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
