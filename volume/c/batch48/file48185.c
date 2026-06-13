// fichero 48185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48185;

Registro48185 crear_registro48185(int id) {
    Registro48185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48185(Registro48185 r) {
    return r.valor + r.id;
}
