// fichero 22205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22205;

Registro22205 crear_registro22205(int id) {
    Registro22205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22205(Registro22205 r) {
    return r.valor + r.id;
}
