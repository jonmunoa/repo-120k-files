// fichero 51781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51781;

Registro51781 crear_registro51781(int id) {
    Registro51781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51781(Registro51781 r) {
    return r.valor + r.id;
}
