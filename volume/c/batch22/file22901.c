// fichero 22901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22901;

Registro22901 crear_registro22901(int id) {
    Registro22901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22901(Registro22901 r) {
    return r.valor + r.id;
}
