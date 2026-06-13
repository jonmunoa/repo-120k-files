// fichero 25181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25181;

Registro25181 crear_registro25181(int id) {
    Registro25181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25181(Registro25181 r) {
    return r.valor + r.id;
}
