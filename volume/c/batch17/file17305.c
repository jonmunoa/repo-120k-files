// fichero 17305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17305;

Registro17305 crear_registro17305(int id) {
    Registro17305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17305(Registro17305 r) {
    return r.valor + r.id;
}
