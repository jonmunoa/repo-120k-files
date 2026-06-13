// fichero 52201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52201;

Registro52201 crear_registro52201(int id) {
    Registro52201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52201(Registro52201 r) {
    return r.valor + r.id;
}
