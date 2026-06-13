// fichero 789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro789;

Registro789 crear_registro789(int id) {
    Registro789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro789(Registro789 r) {
    return r.valor + r.id;
}
