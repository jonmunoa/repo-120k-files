// fichero 32893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32893;

Registro32893 crear_registro32893(int id) {
    Registro32893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32893(Registro32893 r) {
    return r.valor + r.id;
}
