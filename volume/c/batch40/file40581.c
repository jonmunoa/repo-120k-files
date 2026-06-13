// fichero 40581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40581;

Registro40581 crear_registro40581(int id) {
    Registro40581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40581(Registro40581 r) {
    return r.valor + r.id;
}
