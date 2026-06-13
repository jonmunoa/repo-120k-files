// fichero 23729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23729;

Registro23729 crear_registro23729(int id) {
    Registro23729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23729(Registro23729 r) {
    return r.valor + r.id;
}
