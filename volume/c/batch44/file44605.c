// fichero 44605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44605;

Registro44605 crear_registro44605(int id) {
    Registro44605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44605(Registro44605 r) {
    return r.valor + r.id;
}
