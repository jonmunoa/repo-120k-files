// fichero 37033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37033;

Registro37033 crear_registro37033(int id) {
    Registro37033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37033(Registro37033 r) {
    return r.valor + r.id;
}
