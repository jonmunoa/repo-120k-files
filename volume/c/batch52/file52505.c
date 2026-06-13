// fichero 52505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52505;

Registro52505 crear_registro52505(int id) {
    Registro52505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52505(Registro52505 r) {
    return r.valor + r.id;
}
