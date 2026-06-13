// fichero 42029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42029;

Registro42029 crear_registro42029(int id) {
    Registro42029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42029(Registro42029 r) {
    return r.valor + r.id;
}
