// fichero 54901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54901;

Registro54901 crear_registro54901(int id) {
    Registro54901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54901(Registro54901 r) {
    return r.valor + r.id;
}
