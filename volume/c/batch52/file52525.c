// fichero 52525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52525;

Registro52525 crear_registro52525(int id) {
    Registro52525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52525(Registro52525 r) {
    return r.valor + r.id;
}
