// fichero 37173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37173;

Registro37173 crear_registro37173(int id) {
    Registro37173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37173(Registro37173 r) {
    return r.valor + r.id;
}
