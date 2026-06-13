// fichero 28117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28117;

Registro28117 crear_registro28117(int id) {
    Registro28117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28117(Registro28117 r) {
    return r.valor + r.id;
}
