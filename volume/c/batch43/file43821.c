// fichero 43821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43821;

Registro43821 crear_registro43821(int id) {
    Registro43821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43821(Registro43821 r) {
    return r.valor + r.id;
}
