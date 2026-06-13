// fichero 51829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51829;

Registro51829 crear_registro51829(int id) {
    Registro51829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51829(Registro51829 r) {
    return r.valor + r.id;
}
