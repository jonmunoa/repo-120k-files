// fichero 733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro733;

Registro733 crear_registro733(int id) {
    Registro733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro733(Registro733 r) {
    return r.valor + r.id;
}
