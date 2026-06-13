// fichero 42245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42245;

Registro42245 crear_registro42245(int id) {
    Registro42245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42245(Registro42245 r) {
    return r.valor + r.id;
}
