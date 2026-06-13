// fichero 37121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37121;

Registro37121 crear_registro37121(int id) {
    Registro37121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37121(Registro37121 r) {
    return r.valor + r.id;
}
