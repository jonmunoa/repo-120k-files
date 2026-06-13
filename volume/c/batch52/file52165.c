// fichero 52165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52165;

Registro52165 crear_registro52165(int id) {
    Registro52165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52165(Registro52165 r) {
    return r.valor + r.id;
}
