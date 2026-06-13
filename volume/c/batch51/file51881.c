// fichero 51881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51881;

Registro51881 crear_registro51881(int id) {
    Registro51881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51881(Registro51881 r) {
    return r.valor + r.id;
}
