// fichero 37553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37553;

Registro37553 crear_registro37553(int id) {
    Registro37553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37553(Registro37553 r) {
    return r.valor + r.id;
}
