// fichero 34821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34821;

Registro34821 crear_registro34821(int id) {
    Registro34821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34821(Registro34821 r) {
    return r.valor + r.id;
}
