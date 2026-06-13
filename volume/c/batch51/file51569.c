// fichero 51569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51569;

Registro51569 crear_registro51569(int id) {
    Registro51569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51569(Registro51569 r) {
    return r.valor + r.id;
}
