// fichero 52477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52477;

Registro52477 crear_registro52477(int id) {
    Registro52477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52477(Registro52477 r) {
    return r.valor + r.id;
}
