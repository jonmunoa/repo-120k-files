// fichero 43169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43169;

Registro43169 crear_registro43169(int id) {
    Registro43169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43169(Registro43169 r) {
    return r.valor + r.id;
}
