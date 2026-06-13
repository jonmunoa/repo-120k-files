// fichero 33181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33181;

Registro33181 crear_registro33181(int id) {
    Registro33181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33181(Registro33181 r) {
    return r.valor + r.id;
}
