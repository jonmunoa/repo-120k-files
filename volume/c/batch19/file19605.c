// fichero 19605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19605;

Registro19605 crear_registro19605(int id) {
    Registro19605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19605(Registro19605 r) {
    return r.valor + r.id;
}
