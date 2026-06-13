// fichero 37677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37677;

Registro37677 crear_registro37677(int id) {
    Registro37677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37677(Registro37677 r) {
    return r.valor + r.id;
}
