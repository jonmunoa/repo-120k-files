// fichero 25209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25209;

Registro25209 crear_registro25209(int id) {
    Registro25209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25209(Registro25209 r) {
    return r.valor + r.id;
}
