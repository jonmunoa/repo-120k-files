// fichero 23561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23561;

Registro23561 crear_registro23561(int id) {
    Registro23561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23561(Registro23561 r) {
    return r.valor + r.id;
}
