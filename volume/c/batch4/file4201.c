// fichero 4201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4201;

Registro4201 crear_registro4201(int id) {
    Registro4201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4201(Registro4201 r) {
    return r.valor + r.id;
}
