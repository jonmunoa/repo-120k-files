// fichero 42733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42733;

Registro42733 crear_registro42733(int id) {
    Registro42733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42733(Registro42733 r) {
    return r.valor + r.id;
}
