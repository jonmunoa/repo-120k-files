// fichero 51501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51501;

Registro51501 crear_registro51501(int id) {
    Registro51501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51501(Registro51501 r) {
    return r.valor + r.id;
}
