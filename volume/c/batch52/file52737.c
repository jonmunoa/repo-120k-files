// fichero 52737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52737;

Registro52737 crear_registro52737(int id) {
    Registro52737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52737(Registro52737 r) {
    return r.valor + r.id;
}
