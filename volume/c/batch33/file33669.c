// fichero 33669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33669;

Registro33669 crear_registro33669(int id) {
    Registro33669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33669(Registro33669 r) {
    return r.valor + r.id;
}
