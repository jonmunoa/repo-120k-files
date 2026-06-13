// fichero 43901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43901;

Registro43901 crear_registro43901(int id) {
    Registro43901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43901(Registro43901 r) {
    return r.valor + r.id;
}
