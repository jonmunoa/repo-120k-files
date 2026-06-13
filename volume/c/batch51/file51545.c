// fichero 51545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51545;

Registro51545 crear_registro51545(int id) {
    Registro51545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51545(Registro51545 r) {
    return r.valor + r.id;
}
