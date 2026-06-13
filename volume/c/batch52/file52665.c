// fichero 52665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52665;

Registro52665 crear_registro52665(int id) {
    Registro52665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52665(Registro52665 r) {
    return r.valor + r.id;
}
