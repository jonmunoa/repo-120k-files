// fichero 42193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42193;

Registro42193 crear_registro42193(int id) {
    Registro42193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42193(Registro42193 r) {
    return r.valor + r.id;
}
