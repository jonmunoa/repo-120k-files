// fichero 49073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49073;

Registro49073 crear_registro49073(int id) {
    Registro49073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49073(Registro49073 r) {
    return r.valor + r.id;
}
