// fichero 42281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42281;

Registro42281 crear_registro42281(int id) {
    Registro42281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42281(Registro42281 r) {
    return r.valor + r.id;
}
