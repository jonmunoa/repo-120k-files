// fichero 33789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33789;

Registro33789 crear_registro33789(int id) {
    Registro33789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33789(Registro33789 r) {
    return r.valor + r.id;
}
