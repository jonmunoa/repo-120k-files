// fichero 32101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32101;

Registro32101 crear_registro32101(int id) {
    Registro32101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32101(Registro32101 r) {
    return r.valor + r.id;
}
