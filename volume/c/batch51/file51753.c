// fichero 51753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51753;

Registro51753 crear_registro51753(int id) {
    Registro51753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51753(Registro51753 r) {
    return r.valor + r.id;
}
