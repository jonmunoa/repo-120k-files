// fichero 21405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21405;

Registro21405 crear_registro21405(int id) {
    Registro21405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21405(Registro21405 r) {
    return r.valor + r.id;
}
