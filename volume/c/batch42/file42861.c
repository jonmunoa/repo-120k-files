// fichero 42861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42861;

Registro42861 crear_registro42861(int id) {
    Registro42861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42861(Registro42861 r) {
    return r.valor + r.id;
}
