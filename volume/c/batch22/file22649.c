// fichero 22649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22649;

Registro22649 crear_registro22649(int id) {
    Registro22649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22649(Registro22649 r) {
    return r.valor + r.id;
}
