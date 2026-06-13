// fichero 52269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52269;

Registro52269 crear_registro52269(int id) {
    Registro52269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52269(Registro52269 r) {
    return r.valor + r.id;
}
