// fichero 42797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42797;

Registro42797 crear_registro42797(int id) {
    Registro42797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42797(Registro42797 r) {
    return r.valor + r.id;
}
