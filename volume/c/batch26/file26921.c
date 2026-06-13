// fichero 26921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26921;

Registro26921 crear_registro26921(int id) {
    Registro26921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26921(Registro26921 r) {
    return r.valor + r.id;
}
