// fichero 14657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14657;

Registro14657 crear_registro14657(int id) {
    Registro14657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14657(Registro14657 r) {
    return r.valor + r.id;
}
