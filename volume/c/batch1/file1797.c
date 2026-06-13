// fichero 1797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1797;

Registro1797 crear_registro1797(int id) {
    Registro1797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1797(Registro1797 r) {
    return r.valor + r.id;
}
