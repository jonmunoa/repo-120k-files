// fichero 29329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29329;

Registro29329 crear_registro29329(int id) {
    Registro29329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29329(Registro29329 r) {
    return r.valor + r.id;
}
