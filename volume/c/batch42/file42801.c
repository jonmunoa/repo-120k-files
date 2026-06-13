// fichero 42801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42801;

Registro42801 crear_registro42801(int id) {
    Registro42801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42801(Registro42801 r) {
    return r.valor + r.id;
}
