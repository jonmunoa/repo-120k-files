// fichero 11277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11277;

Registro11277 crear_registro11277(int id) {
    Registro11277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11277(Registro11277 r) {
    return r.valor + r.id;
}
