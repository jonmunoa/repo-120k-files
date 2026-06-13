// fichero 51745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51745;

Registro51745 crear_registro51745(int id) {
    Registro51745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51745(Registro51745 r) {
    return r.valor + r.id;
}
