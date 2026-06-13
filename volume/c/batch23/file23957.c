// fichero 23957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23957;

Registro23957 crear_registro23957(int id) {
    Registro23957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23957(Registro23957 r) {
    return r.valor + r.id;
}
