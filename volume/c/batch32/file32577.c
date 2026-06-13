// fichero 32577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32577;

Registro32577 crear_registro32577(int id) {
    Registro32577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32577(Registro32577 r) {
    return r.valor + r.id;
}
