// fichero 51801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51801;

Registro51801 crear_registro51801(int id) {
    Registro51801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51801(Registro51801 r) {
    return r.valor + r.id;
}
