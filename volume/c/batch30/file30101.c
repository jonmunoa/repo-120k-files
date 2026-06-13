// fichero 30101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30101;

Registro30101 crear_registro30101(int id) {
    Registro30101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30101(Registro30101 r) {
    return r.valor + r.id;
}
