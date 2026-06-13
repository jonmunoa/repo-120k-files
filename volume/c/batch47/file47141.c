// fichero 47141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47141;

Registro47141 crear_registro47141(int id) {
    Registro47141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47141(Registro47141 r) {
    return r.valor + r.id;
}
