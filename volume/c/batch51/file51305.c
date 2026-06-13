// fichero 51305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51305;

Registro51305 crear_registro51305(int id) {
    Registro51305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51305(Registro51305 r) {
    return r.valor + r.id;
}
