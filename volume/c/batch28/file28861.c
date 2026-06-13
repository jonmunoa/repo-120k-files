// fichero 28861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28861;

Registro28861 crear_registro28861(int id) {
    Registro28861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28861(Registro28861 r) {
    return r.valor + r.id;
}
