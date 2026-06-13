// fichero 42489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42489;

Registro42489 crear_registro42489(int id) {
    Registro42489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42489(Registro42489 r) {
    return r.valor + r.id;
}
