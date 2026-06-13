// fichero 43969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43969;

Registro43969 crear_registro43969(int id) {
    Registro43969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43969(Registro43969 r) {
    return r.valor + r.id;
}
