// fichero 36145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36145;

Registro36145 crear_registro36145(int id) {
    Registro36145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36145(Registro36145 r) {
    return r.valor + r.id;
}
