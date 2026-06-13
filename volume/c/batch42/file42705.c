// fichero 42705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42705;

Registro42705 crear_registro42705(int id) {
    Registro42705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42705(Registro42705 r) {
    return r.valor + r.id;
}
