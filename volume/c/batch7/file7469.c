// fichero 7469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7469;

Registro7469 crear_registro7469(int id) {
    Registro7469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7469(Registro7469 r) {
    return r.valor + r.id;
}
