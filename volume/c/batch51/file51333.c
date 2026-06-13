// fichero 51333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51333;

Registro51333 crear_registro51333(int id) {
    Registro51333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51333(Registro51333 r) {
    return r.valor + r.id;
}
