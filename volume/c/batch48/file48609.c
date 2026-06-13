// fichero 48609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48609;

Registro48609 crear_registro48609(int id) {
    Registro48609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48609(Registro48609 r) {
    return r.valor + r.id;
}
