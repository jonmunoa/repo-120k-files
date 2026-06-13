// fichero 34257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34257;

Registro34257 crear_registro34257(int id) {
    Registro34257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34257(Registro34257 r) {
    return r.valor + r.id;
}
