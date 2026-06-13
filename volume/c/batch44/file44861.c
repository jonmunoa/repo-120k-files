// fichero 44861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44861;

Registro44861 crear_registro44861(int id) {
    Registro44861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44861(Registro44861 r) {
    return r.valor + r.id;
}
