// fichero 33585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33585;

Registro33585 crear_registro33585(int id) {
    Registro33585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33585(Registro33585 r) {
    return r.valor + r.id;
}
