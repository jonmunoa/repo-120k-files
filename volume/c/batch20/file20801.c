// fichero 20801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20801;

Registro20801 crear_registro20801(int id) {
    Registro20801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20801(Registro20801 r) {
    return r.valor + r.id;
}
