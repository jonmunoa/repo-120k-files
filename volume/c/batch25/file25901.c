// fichero 25901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25901;

Registro25901 crear_registro25901(int id) {
    Registro25901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25901(Registro25901 r) {
    return r.valor + r.id;
}
