// fichero 8573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8573;

Registro8573 crear_registro8573(int id) {
    Registro8573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8573(Registro8573 r) {
    return r.valor + r.id;
}
