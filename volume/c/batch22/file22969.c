// fichero 22969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22969;

Registro22969 crear_registro22969(int id) {
    Registro22969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22969(Registro22969 r) {
    return r.valor + r.id;
}
