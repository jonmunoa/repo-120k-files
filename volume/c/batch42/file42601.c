// fichero 42601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42601;

Registro42601 crear_registro42601(int id) {
    Registro42601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42601(Registro42601 r) {
    return r.valor + r.id;
}
