// fichero 37789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37789;

Registro37789 crear_registro37789(int id) {
    Registro37789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37789(Registro37789 r) {
    return r.valor + r.id;
}
