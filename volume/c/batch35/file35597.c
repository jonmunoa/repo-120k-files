// fichero 35597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35597;

Registro35597 crear_registro35597(int id) {
    Registro35597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35597(Registro35597 r) {
    return r.valor + r.id;
}
