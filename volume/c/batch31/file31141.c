// fichero 31141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31141;

Registro31141 crear_registro31141(int id) {
    Registro31141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31141(Registro31141 r) {
    return r.valor + r.id;
}
