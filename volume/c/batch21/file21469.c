// fichero 21469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21469;

Registro21469 crear_registro21469(int id) {
    Registro21469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21469(Registro21469 r) {
    return r.valor + r.id;
}
