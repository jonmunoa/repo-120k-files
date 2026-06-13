// fichero 25509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25509;

Registro25509 crear_registro25509(int id) {
    Registro25509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25509(Registro25509 r) {
    return r.valor + r.id;
}
