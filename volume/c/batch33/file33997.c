// fichero 33997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33997;

Registro33997 crear_registro33997(int id) {
    Registro33997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33997(Registro33997 r) {
    return r.valor + r.id;
}
