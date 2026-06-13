// fichero 11441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11441;

Registro11441 crear_registro11441(int id) {
    Registro11441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11441(Registro11441 r) {
    return r.valor + r.id;
}
