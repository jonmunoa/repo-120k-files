// fichero 52341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52341;

Registro52341 crear_registro52341(int id) {
    Registro52341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52341(Registro52341 r) {
    return r.valor + r.id;
}
