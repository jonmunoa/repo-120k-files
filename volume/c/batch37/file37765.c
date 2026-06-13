// fichero 37765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37765;

Registro37765 crear_registro37765(int id) {
    Registro37765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37765(Registro37765 r) {
    return r.valor + r.id;
}
