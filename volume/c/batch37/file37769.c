// fichero 37769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37769;

Registro37769 crear_registro37769(int id) {
    Registro37769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37769(Registro37769 r) {
    return r.valor + r.id;
}
