// fichero 51189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51189;

Registro51189 crear_registro51189(int id) {
    Registro51189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51189(Registro51189 r) {
    return r.valor + r.id;
}
