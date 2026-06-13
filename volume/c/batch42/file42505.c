// fichero 42505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42505;

Registro42505 crear_registro42505(int id) {
    Registro42505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42505(Registro42505 r) {
    return r.valor + r.id;
}
