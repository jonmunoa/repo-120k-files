// fichero 32185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32185;

Registro32185 crear_registro32185(int id) {
    Registro32185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32185(Registro32185 r) {
    return r.valor + r.id;
}
