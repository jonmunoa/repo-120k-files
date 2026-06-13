// fichero 12989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12989;

Registro12989 crear_registro12989(int id) {
    Registro12989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12989(Registro12989 r) {
    return r.valor + r.id;
}
