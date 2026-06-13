// fichero 97 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro97;

Registro97 crear_registro97(int id) {
    Registro97 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro97(Registro97 r) {
    return r.valor + r.id;
}
