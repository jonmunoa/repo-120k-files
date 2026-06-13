// fichero 21141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21141;

Registro21141 crear_registro21141(int id) {
    Registro21141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21141(Registro21141 r) {
    return r.valor + r.id;
}
