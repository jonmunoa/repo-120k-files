// fichero 15361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15361;

Registro15361 crear_registro15361(int id) {
    Registro15361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15361(Registro15361 r) {
    return r.valor + r.id;
}
