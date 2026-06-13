// fichero 7933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7933;

Registro7933 crear_registro7933(int id) {
    Registro7933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7933(Registro7933 r) {
    return r.valor + r.id;
}
