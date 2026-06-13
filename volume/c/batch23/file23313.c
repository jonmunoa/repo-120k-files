// fichero 23313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23313;

Registro23313 crear_registro23313(int id) {
    Registro23313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23313(Registro23313 r) {
    return r.valor + r.id;
}
