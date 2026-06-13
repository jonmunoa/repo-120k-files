// fichero 52209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52209;

Registro52209 crear_registro52209(int id) {
    Registro52209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52209(Registro52209 r) {
    return r.valor + r.id;
}
