// fichero 14561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14561;

Registro14561 crear_registro14561(int id) {
    Registro14561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14561(Registro14561 r) {
    return r.valor + r.id;
}
