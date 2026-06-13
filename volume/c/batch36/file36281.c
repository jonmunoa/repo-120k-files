// fichero 36281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36281;

Registro36281 crear_registro36281(int id) {
    Registro36281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36281(Registro36281 r) {
    return r.valor + r.id;
}
