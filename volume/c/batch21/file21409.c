// fichero 21409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21409;

Registro21409 crear_registro21409(int id) {
    Registro21409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21409(Registro21409 r) {
    return r.valor + r.id;
}
