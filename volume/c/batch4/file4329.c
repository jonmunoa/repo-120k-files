// fichero 4329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4329;

Registro4329 crear_registro4329(int id) {
    Registro4329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4329(Registro4329 r) {
    return r.valor + r.id;
}
