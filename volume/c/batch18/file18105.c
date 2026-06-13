// fichero 18105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18105;

Registro18105 crear_registro18105(int id) {
    Registro18105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18105(Registro18105 r) {
    return r.valor + r.id;
}
