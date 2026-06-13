// fichero 49973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49973;

Registro49973 crear_registro49973(int id) {
    Registro49973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49973(Registro49973 r) {
    return r.valor + r.id;
}
