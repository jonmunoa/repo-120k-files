// fichero 18605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18605;

Registro18605 crear_registro18605(int id) {
    Registro18605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18605(Registro18605 r) {
    return r.valor + r.id;
}
