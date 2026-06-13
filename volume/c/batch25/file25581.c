// fichero 25581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25581;

Registro25581 crear_registro25581(int id) {
    Registro25581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25581(Registro25581 r) {
    return r.valor + r.id;
}
