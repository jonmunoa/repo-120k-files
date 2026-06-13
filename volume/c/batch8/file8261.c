// fichero 8261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8261;

Registro8261 crear_registro8261(int id) {
    Registro8261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8261(Registro8261 r) {
    return r.valor + r.id;
}
