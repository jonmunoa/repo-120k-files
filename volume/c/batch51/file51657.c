// fichero 51657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51657;

Registro51657 crear_registro51657(int id) {
    Registro51657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51657(Registro51657 r) {
    return r.valor + r.id;
}
