// fichero 33793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33793;

Registro33793 crear_registro33793(int id) {
    Registro33793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33793(Registro33793 r) {
    return r.valor + r.id;
}
