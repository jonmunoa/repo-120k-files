// fichero 29973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29973;

Registro29973 crear_registro29973(int id) {
    Registro29973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29973(Registro29973 r) {
    return r.valor + r.id;
}
