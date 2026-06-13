// fichero 34801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34801;

Registro34801 crear_registro34801(int id) {
    Registro34801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34801(Registro34801 r) {
    return r.valor + r.id;
}
