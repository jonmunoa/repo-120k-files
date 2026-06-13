// fichero 2729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2729;

Registro2729 crear_registro2729(int id) {
    Registro2729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2729(Registro2729 r) {
    return r.valor + r.id;
}
