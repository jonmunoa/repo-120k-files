// fichero 15909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15909;

Registro15909 crear_registro15909(int id) {
    Registro15909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15909(Registro15909 r) {
    return r.valor + r.id;
}
