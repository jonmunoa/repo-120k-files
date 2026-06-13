// fichero 26989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26989;

Registro26989 crear_registro26989(int id) {
    Registro26989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26989(Registro26989 r) {
    return r.valor + r.id;
}
