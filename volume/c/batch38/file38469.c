// fichero 38469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38469;

Registro38469 crear_registro38469(int id) {
    Registro38469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38469(Registro38469 r) {
    return r.valor + r.id;
}
