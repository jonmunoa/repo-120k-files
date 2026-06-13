// fichero 26061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26061;

Registro26061 crear_registro26061(int id) {
    Registro26061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26061(Registro26061 r) {
    return r.valor + r.id;
}
