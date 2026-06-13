// fichero 42585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42585;

Registro42585 crear_registro42585(int id) {
    Registro42585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42585(Registro42585 r) {
    return r.valor + r.id;
}
