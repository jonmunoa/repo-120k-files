// fichero 33977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33977;

Registro33977 crear_registro33977(int id) {
    Registro33977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33977(Registro33977 r) {
    return r.valor + r.id;
}
