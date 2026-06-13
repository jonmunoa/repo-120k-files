// fichero 52141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52141;

Registro52141 crear_registro52141(int id) {
    Registro52141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52141(Registro52141 r) {
    return r.valor + r.id;
}
