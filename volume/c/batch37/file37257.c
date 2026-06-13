// fichero 37257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37257;

Registro37257 crear_registro37257(int id) {
    Registro37257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37257(Registro37257 r) {
    return r.valor + r.id;
}
