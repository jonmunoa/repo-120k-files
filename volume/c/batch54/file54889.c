// fichero 54889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54889;

Registro54889 crear_registro54889(int id) {
    Registro54889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54889(Registro54889 r) {
    return r.valor + r.id;
}
