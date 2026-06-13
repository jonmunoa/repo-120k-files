// fichero 47857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47857;

Registro47857 crear_registro47857(int id) {
    Registro47857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47857(Registro47857 r) {
    return r.valor + r.id;
}
