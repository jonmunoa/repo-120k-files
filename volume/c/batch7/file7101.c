// fichero 7101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7101;

Registro7101 crear_registro7101(int id) {
    Registro7101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7101(Registro7101 r) {
    return r.valor + r.id;
}
