// fichero 27097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27097;

Registro27097 crear_registro27097(int id) {
    Registro27097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27097(Registro27097 r) {
    return r.valor + r.id;
}
