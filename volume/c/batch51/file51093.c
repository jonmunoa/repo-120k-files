// fichero 51093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51093;

Registro51093 crear_registro51093(int id) {
    Registro51093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51093(Registro51093 r) {
    return r.valor + r.id;
}
