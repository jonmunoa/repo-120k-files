// fichero 4409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4409;

Registro4409 crear_registro4409(int id) {
    Registro4409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4409(Registro4409 r) {
    return r.valor + r.id;
}
