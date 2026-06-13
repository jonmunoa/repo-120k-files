// fichero 24813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24813;

Registro24813 crear_registro24813(int id) {
    Registro24813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24813(Registro24813 r) {
    return r.valor + r.id;
}
