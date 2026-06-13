// fichero 37885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37885;

Registro37885 crear_registro37885(int id) {
    Registro37885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37885(Registro37885 r) {
    return r.valor + r.id;
}
