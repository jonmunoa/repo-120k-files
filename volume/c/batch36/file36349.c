// fichero 36349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36349;

Registro36349 crear_registro36349(int id) {
    Registro36349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36349(Registro36349 r) {
    return r.valor + r.id;
}
