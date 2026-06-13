// fichero 25145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25145;

Registro25145 crear_registro25145(int id) {
    Registro25145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25145(Registro25145 r) {
    return r.valor + r.id;
}
