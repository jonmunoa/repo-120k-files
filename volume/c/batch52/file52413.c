// fichero 52413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52413;

Registro52413 crear_registro52413(int id) {
    Registro52413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52413(Registro52413 r) {
    return r.valor + r.id;
}
