// fichero 6145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6145;

Registro6145 crear_registro6145(int id) {
    Registro6145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6145(Registro6145 r) {
    return r.valor + r.id;
}
