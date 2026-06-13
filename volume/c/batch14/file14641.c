// fichero 14641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14641;

Registro14641 crear_registro14641(int id) {
    Registro14641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14641(Registro14641 r) {
    return r.valor + r.id;
}
