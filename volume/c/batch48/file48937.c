// fichero 48937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48937;

Registro48937 crear_registro48937(int id) {
    Registro48937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48937(Registro48937 r) {
    return r.valor + r.id;
}
