// fichero 53505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53505;

Registro53505 crear_registro53505(int id) {
    Registro53505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53505(Registro53505 r) {
    return r.valor + r.id;
}
