// fichero 6385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6385;

Registro6385 crear_registro6385(int id) {
    Registro6385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6385(Registro6385 r) {
    return r.valor + r.id;
}
