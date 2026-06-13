// fichero 51105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51105;

Registro51105 crear_registro51105(int id) {
    Registro51105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51105(Registro51105 r) {
    return r.valor + r.id;
}
