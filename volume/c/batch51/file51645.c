// fichero 51645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51645;

Registro51645 crear_registro51645(int id) {
    Registro51645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51645(Registro51645 r) {
    return r.valor + r.id;
}
