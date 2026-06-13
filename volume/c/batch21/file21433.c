// fichero 21433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21433;

Registro21433 crear_registro21433(int id) {
    Registro21433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21433(Registro21433 r) {
    return r.valor + r.id;
}
