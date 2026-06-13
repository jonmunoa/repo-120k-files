// fichero 51369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51369;

Registro51369 crear_registro51369(int id) {
    Registro51369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51369(Registro51369 r) {
    return r.valor + r.id;
}
