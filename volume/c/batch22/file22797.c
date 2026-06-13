// fichero 22797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22797;

Registro22797 crear_registro22797(int id) {
    Registro22797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22797(Registro22797 r) {
    return r.valor + r.id;
}
