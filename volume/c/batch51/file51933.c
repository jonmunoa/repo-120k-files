// fichero 51933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51933;

Registro51933 crear_registro51933(int id) {
    Registro51933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51933(Registro51933 r) {
    return r.valor + r.id;
}
