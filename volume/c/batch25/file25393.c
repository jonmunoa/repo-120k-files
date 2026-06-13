// fichero 25393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25393;

Registro25393 crear_registro25393(int id) {
    Registro25393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25393(Registro25393 r) {
    return r.valor + r.id;
}
