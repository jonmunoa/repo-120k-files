// fichero 21597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21597;

Registro21597 crear_registro21597(int id) {
    Registro21597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21597(Registro21597 r) {
    return r.valor + r.id;
}
