// fichero 14141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14141;

Registro14141 crear_registro14141(int id) {
    Registro14141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14141(Registro14141 r) {
    return r.valor + r.id;
}
