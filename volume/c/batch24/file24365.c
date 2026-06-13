// fichero 24365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24365;

Registro24365 crear_registro24365(int id) {
    Registro24365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24365(Registro24365 r) {
    return r.valor + r.id;
}
