// fichero 51901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51901;

Registro51901 crear_registro51901(int id) {
    Registro51901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51901(Registro51901 r) {
    return r.valor + r.id;
}
