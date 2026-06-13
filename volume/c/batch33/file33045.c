// fichero 33045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33045;

Registro33045 crear_registro33045(int id) {
    Registro33045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33045(Registro33045 r) {
    return r.valor + r.id;
}
