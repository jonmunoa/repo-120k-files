// fichero 33801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33801;

Registro33801 crear_registro33801(int id) {
    Registro33801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33801(Registro33801 r) {
    return r.valor + r.id;
}
