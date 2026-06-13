// fichero 19341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19341;

Registro19341 crear_registro19341(int id) {
    Registro19341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19341(Registro19341 r) {
    return r.valor + r.id;
}
