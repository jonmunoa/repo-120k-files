// fichero 21577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21577;

Registro21577 crear_registro21577(int id) {
    Registro21577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21577(Registro21577 r) {
    return r.valor + r.id;
}
