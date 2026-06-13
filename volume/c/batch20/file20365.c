// fichero 20365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20365;

Registro20365 crear_registro20365(int id) {
    Registro20365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20365(Registro20365 r) {
    return r.valor + r.id;
}
