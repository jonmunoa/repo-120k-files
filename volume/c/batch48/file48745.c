// fichero 48745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48745;

Registro48745 crear_registro48745(int id) {
    Registro48745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48745(Registro48745 r) {
    return r.valor + r.id;
}
