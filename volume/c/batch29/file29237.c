// fichero 29237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29237;

Registro29237 crear_registro29237(int id) {
    Registro29237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29237(Registro29237 r) {
    return r.valor + r.id;
}
