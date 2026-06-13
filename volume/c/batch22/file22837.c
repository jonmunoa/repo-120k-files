// fichero 22837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22837;

Registro22837 crear_registro22837(int id) {
    Registro22837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22837(Registro22837 r) {
    return r.valor + r.id;
}
