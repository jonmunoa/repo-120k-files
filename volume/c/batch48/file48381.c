// fichero 48381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48381;

Registro48381 crear_registro48381(int id) {
    Registro48381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48381(Registro48381 r) {
    return r.valor + r.id;
}
