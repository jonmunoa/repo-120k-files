// fichero 17173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17173;

Registro17173 crear_registro17173(int id) {
    Registro17173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17173(Registro17173 r) {
    return r.valor + r.id;
}
