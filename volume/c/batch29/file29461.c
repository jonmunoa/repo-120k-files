// fichero 29461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29461;

Registro29461 crear_registro29461(int id) {
    Registro29461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29461(Registro29461 r) {
    return r.valor + r.id;
}
