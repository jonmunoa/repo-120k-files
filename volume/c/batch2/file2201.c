// fichero 2201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2201;

Registro2201 crear_registro2201(int id) {
    Registro2201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2201(Registro2201 r) {
    return r.valor + r.id;
}
