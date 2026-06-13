// fichero 26105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26105;

Registro26105 crear_registro26105(int id) {
    Registro26105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26105(Registro26105 r) {
    return r.valor + r.id;
}
