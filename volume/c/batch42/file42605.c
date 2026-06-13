// fichero 42605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42605;

Registro42605 crear_registro42605(int id) {
    Registro42605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42605(Registro42605 r) {
    return r.valor + r.id;
}
