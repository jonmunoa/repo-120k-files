// fichero 52809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52809;

Registro52809 crear_registro52809(int id) {
    Registro52809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52809(Registro52809 r) {
    return r.valor + r.id;
}
