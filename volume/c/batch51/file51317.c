// fichero 51317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51317;

Registro51317 crear_registro51317(int id) {
    Registro51317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51317(Registro51317 r) {
    return r.valor + r.id;
}
