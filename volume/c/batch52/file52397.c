// fichero 52397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52397;

Registro52397 crear_registro52397(int id) {
    Registro52397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52397(Registro52397 r) {
    return r.valor + r.id;
}
