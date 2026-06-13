// fichero 38725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38725;

Registro38725 crear_registro38725(int id) {
    Registro38725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38725(Registro38725 r) {
    return r.valor + r.id;
}
