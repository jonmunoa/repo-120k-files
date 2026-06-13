// fichero 38593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38593;

Registro38593 crear_registro38593(int id) {
    Registro38593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38593(Registro38593 r) {
    return r.valor + r.id;
}
