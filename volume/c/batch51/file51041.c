// fichero 51041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51041;

Registro51041 crear_registro51041(int id) {
    Registro51041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51041(Registro51041 r) {
    return r.valor + r.id;
}
