// fichero 39069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39069;

Registro39069 crear_registro39069(int id) {
    Registro39069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39069(Registro39069 r) {
    return r.valor + r.id;
}
