// fichero 7689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7689;

Registro7689 crear_registro7689(int id) {
    Registro7689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7689(Registro7689 r) {
    return r.valor + r.id;
}
