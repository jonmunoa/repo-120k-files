// fichero 42677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42677;

Registro42677 crear_registro42677(int id) {
    Registro42677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42677(Registro42677 r) {
    return r.valor + r.id;
}
