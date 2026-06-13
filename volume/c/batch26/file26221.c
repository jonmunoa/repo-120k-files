// fichero 26221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26221;

Registro26221 crear_registro26221(int id) {
    Registro26221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26221(Registro26221 r) {
    return r.valor + r.id;
}
