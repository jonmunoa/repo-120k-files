// fichero 42793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42793;

Registro42793 crear_registro42793(int id) {
    Registro42793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42793(Registro42793 r) {
    return r.valor + r.id;
}
