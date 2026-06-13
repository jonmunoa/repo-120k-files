// fichero 37005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37005;

Registro37005 crear_registro37005(int id) {
    Registro37005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37005(Registro37005 r) {
    return r.valor + r.id;
}
