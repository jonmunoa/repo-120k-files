// fichero 14585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14585;

Registro14585 crear_registro14585(int id) {
    Registro14585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14585(Registro14585 r) {
    return r.valor + r.id;
}
