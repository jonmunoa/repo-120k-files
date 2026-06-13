// fichero 28813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28813;

Registro28813 crear_registro28813(int id) {
    Registro28813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28813(Registro28813 r) {
    return r.valor + r.id;
}
