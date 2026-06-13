// fichero 43893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43893;

Registro43893 crear_registro43893(int id) {
    Registro43893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43893(Registro43893 r) {
    return r.valor + r.id;
}
