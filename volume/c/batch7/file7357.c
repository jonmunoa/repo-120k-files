// fichero 7357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7357;

Registro7357 crear_registro7357(int id) {
    Registro7357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7357(Registro7357 r) {
    return r.valor + r.id;
}
