// fichero 51181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51181;

Registro51181 crear_registro51181(int id) {
    Registro51181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51181(Registro51181 r) {
    return r.valor + r.id;
}
