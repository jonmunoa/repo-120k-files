// fichero 42713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42713;

Registro42713 crear_registro42713(int id) {
    Registro42713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42713(Registro42713 r) {
    return r.valor + r.id;
}
