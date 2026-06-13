// fichero 52553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52553;

Registro52553 crear_registro52553(int id) {
    Registro52553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52553(Registro52553 r) {
    return r.valor + r.id;
}
