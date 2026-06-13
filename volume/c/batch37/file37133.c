// fichero 37133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37133;

Registro37133 crear_registro37133(int id) {
    Registro37133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37133(Registro37133 r) {
    return r.valor + r.id;
}
