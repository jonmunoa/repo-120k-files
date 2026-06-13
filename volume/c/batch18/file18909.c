// fichero 18909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18909;

Registro18909 crear_registro18909(int id) {
    Registro18909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18909(Registro18909 r) {
    return r.valor + r.id;
}
