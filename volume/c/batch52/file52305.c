// fichero 52305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52305;

Registro52305 crear_registro52305(int id) {
    Registro52305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52305(Registro52305 r) {
    return r.valor + r.id;
}
