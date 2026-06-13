// fichero 42257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42257;

Registro42257 crear_registro42257(int id) {
    Registro42257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42257(Registro42257 r) {
    return r.valor + r.id;
}
