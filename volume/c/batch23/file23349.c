// fichero 23349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23349;

Registro23349 crear_registro23349(int id) {
    Registro23349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23349(Registro23349 r) {
    return r.valor + r.id;
}
