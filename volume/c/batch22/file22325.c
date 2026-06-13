// fichero 22325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22325;

Registro22325 crear_registro22325(int id) {
    Registro22325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22325(Registro22325 r) {
    return r.valor + r.id;
}
