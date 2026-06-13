// fichero 44069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44069;

Registro44069 crear_registro44069(int id) {
    Registro44069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44069(Registro44069 r) {
    return r.valor + r.id;
}
