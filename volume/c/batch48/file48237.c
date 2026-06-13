// fichero 48237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48237;

Registro48237 crear_registro48237(int id) {
    Registro48237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48237(Registro48237 r) {
    return r.valor + r.id;
}
