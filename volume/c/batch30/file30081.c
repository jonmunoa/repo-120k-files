// fichero 30081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30081;

Registro30081 crear_registro30081(int id) {
    Registro30081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30081(Registro30081 r) {
    return r.valor + r.id;
}
