// fichero 51117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51117;

Registro51117 crear_registro51117(int id) {
    Registro51117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51117(Registro51117 r) {
    return r.valor + r.id;
}
