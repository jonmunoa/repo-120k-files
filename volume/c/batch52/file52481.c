// fichero 52481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52481;

Registro52481 crear_registro52481(int id) {
    Registro52481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52481(Registro52481 r) {
    return r.valor + r.id;
}
