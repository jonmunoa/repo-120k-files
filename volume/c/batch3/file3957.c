// fichero 3957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3957;

Registro3957 crear_registro3957(int id) {
    Registro3957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3957(Registro3957 r) {
    return r.valor + r.id;
}
