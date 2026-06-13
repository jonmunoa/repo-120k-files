// fichero 27321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27321;

Registro27321 crear_registro27321(int id) {
    Registro27321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27321(Registro27321 r) {
    return r.valor + r.id;
}
