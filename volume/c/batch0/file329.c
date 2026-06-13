// fichero 329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro329;

Registro329 crear_registro329(int id) {
    Registro329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro329(Registro329 r) {
    return r.valor + r.id;
}
