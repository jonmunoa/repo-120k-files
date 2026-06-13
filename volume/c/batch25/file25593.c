// fichero 25593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25593;

Registro25593 crear_registro25593(int id) {
    Registro25593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25593(Registro25593 r) {
    return r.valor + r.id;
}
