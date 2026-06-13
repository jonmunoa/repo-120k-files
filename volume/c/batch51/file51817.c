// fichero 51817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51817;

Registro51817 crear_registro51817(int id) {
    Registro51817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51817(Registro51817 r) {
    return r.valor + r.id;
}
