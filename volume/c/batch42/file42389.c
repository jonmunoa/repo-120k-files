// fichero 42389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42389;

Registro42389 crear_registro42389(int id) {
    Registro42389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42389(Registro42389 r) {
    return r.valor + r.id;
}
