// fichero 38597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38597;

Registro38597 crear_registro38597(int id) {
    Registro38597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38597(Registro38597 r) {
    return r.valor + r.id;
}
