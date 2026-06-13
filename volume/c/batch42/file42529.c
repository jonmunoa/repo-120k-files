// fichero 42529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42529;

Registro42529 crear_registro42529(int id) {
    Registro42529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42529(Registro42529 r) {
    return r.valor + r.id;
}
