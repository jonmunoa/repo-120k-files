// fichero 43153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43153;

Registro43153 crear_registro43153(int id) {
    Registro43153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43153(Registro43153 r) {
    return r.valor + r.id;
}
