// fichero 32705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32705;

Registro32705 crear_registro32705(int id) {
    Registro32705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32705(Registro32705 r) {
    return r.valor + r.id;
}
