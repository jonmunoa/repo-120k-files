// fichero 36233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36233;

Registro36233 crear_registro36233(int id) {
    Registro36233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36233(Registro36233 r) {
    return r.valor + r.id;
}
