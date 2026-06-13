// fichero 51917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51917;

Registro51917 crear_registro51917(int id) {
    Registro51917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51917(Registro51917 r) {
    return r.valor + r.id;
}
