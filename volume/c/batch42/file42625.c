// fichero 42625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42625;

Registro42625 crear_registro42625(int id) {
    Registro42625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42625(Registro42625 r) {
    return r.valor + r.id;
}
