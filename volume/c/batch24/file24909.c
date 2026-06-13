// fichero 24909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24909;

Registro24909 crear_registro24909(int id) {
    Registro24909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24909(Registro24909 r) {
    return r.valor + r.id;
}
