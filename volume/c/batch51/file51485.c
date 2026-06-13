// fichero 51485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51485;

Registro51485 crear_registro51485(int id) {
    Registro51485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51485(Registro51485 r) {
    return r.valor + r.id;
}
