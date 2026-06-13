// fichero 17501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17501;

Registro17501 crear_registro17501(int id) {
    Registro17501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17501(Registro17501 r) {
    return r.valor + r.id;
}
