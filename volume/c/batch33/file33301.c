// fichero 33301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33301;

Registro33301 crear_registro33301(int id) {
    Registro33301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33301(Registro33301 r) {
    return r.valor + r.id;
}
