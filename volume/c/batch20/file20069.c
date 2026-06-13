// fichero 20069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20069;

Registro20069 crear_registro20069(int id) {
    Registro20069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20069(Registro20069 r) {
    return r.valor + r.id;
}
