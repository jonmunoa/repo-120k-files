// fichero 50757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50757;

Registro50757 crear_registro50757(int id) {
    Registro50757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50757(Registro50757 r) {
    return r.valor + r.id;
}
