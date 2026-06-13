// fichero 49909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49909;

Registro49909 crear_registro49909(int id) {
    Registro49909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49909(Registro49909 r) {
    return r.valor + r.id;
}
