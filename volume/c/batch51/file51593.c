// fichero 51593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51593;

Registro51593 crear_registro51593(int id) {
    Registro51593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51593(Registro51593 r) {
    return r.valor + r.id;
}
