// fichero 53605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53605;

Registro53605 crear_registro53605(int id) {
    Registro53605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53605(Registro53605 r) {
    return r.valor + r.id;
}
