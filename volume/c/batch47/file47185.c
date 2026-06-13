// fichero 47185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47185;

Registro47185 crear_registro47185(int id) {
    Registro47185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47185(Registro47185 r) {
    return r.valor + r.id;
}
