// fichero 42017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42017;

Registro42017 crear_registro42017(int id) {
    Registro42017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42017(Registro42017 r) {
    return r.valor + r.id;
}
