// fichero 14797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14797;

Registro14797 crear_registro14797(int id) {
    Registro14797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14797(Registro14797 r) {
    return r.valor + r.id;
}
