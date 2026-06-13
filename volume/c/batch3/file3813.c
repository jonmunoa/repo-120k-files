// fichero 3813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3813;

Registro3813 crear_registro3813(int id) {
    Registro3813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3813(Registro3813 r) {
    return r.valor + r.id;
}
