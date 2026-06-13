// fichero 33469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33469;

Registro33469 crear_registro33469(int id) {
    Registro33469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33469(Registro33469 r) {
    return r.valor + r.id;
}
