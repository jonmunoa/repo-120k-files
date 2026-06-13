// fichero 51749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51749;

Registro51749 crear_registro51749(int id) {
    Registro51749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51749(Registro51749 r) {
    return r.valor + r.id;
}
