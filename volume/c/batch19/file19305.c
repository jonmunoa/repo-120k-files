// fichero 19305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19305;

Registro19305 crear_registro19305(int id) {
    Registro19305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19305(Registro19305 r) {
    return r.valor + r.id;
}
