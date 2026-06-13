// fichero 28729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28729;

Registro28729 crear_registro28729(int id) {
    Registro28729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28729(Registro28729 r) {
    return r.valor + r.id;
}
