// fichero 2597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2597;

Registro2597 crear_registro2597(int id) {
    Registro2597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2597(Registro2597 r) {
    return r.valor + r.id;
}
