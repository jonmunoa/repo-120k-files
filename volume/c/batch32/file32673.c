// fichero 32673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32673;

Registro32673 crear_registro32673(int id) {
    Registro32673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32673(Registro32673 r) {
    return r.valor + r.id;
}
