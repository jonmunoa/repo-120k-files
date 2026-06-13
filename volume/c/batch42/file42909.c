// fichero 42909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42909;

Registro42909 crear_registro42909(int id) {
    Registro42909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42909(Registro42909 r) {
    return r.valor + r.id;
}
