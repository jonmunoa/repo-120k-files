// fichero 28641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28641;

Registro28641 crear_registro28641(int id) {
    Registro28641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28641(Registro28641 r) {
    return r.valor + r.id;
}
