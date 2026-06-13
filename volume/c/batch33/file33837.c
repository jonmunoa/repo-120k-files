// fichero 33837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33837;

Registro33837 crear_registro33837(int id) {
    Registro33837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33837(Registro33837 r) {
    return r.valor + r.id;
}
