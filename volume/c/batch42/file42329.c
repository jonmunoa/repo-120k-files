// fichero 42329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42329;

Registro42329 crear_registro42329(int id) {
    Registro42329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42329(Registro42329 r) {
    return r.valor + r.id;
}
