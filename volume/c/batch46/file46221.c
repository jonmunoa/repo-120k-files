// fichero 46221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46221;

Registro46221 crear_registro46221(int id) {
    Registro46221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46221(Registro46221 r) {
    return r.valor + r.id;
}
