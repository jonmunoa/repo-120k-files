// fichero 47673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47673;

Registro47673 crear_registro47673(int id) {
    Registro47673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47673(Registro47673 r) {
    return r.valor + r.id;
}
