// fichero 20885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20885;

Registro20885 crear_registro20885(int id) {
    Registro20885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20885(Registro20885 r) {
    return r.valor + r.id;
}
