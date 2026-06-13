// fichero 48965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48965;

Registro48965 crear_registro48965(int id) {
    Registro48965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48965(Registro48965 r) {
    return r.valor + r.id;
}
