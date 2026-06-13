// fichero 49425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49425;

Registro49425 crear_registro49425(int id) {
    Registro49425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49425(Registro49425 r) {
    return r.valor + r.id;
}
