// fichero 14101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14101;

Registro14101 crear_registro14101(int id) {
    Registro14101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14101(Registro14101 r) {
    return r.valor + r.id;
}
