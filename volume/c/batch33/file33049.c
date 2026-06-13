// fichero 33049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33049;

Registro33049 crear_registro33049(int id) {
    Registro33049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33049(Registro33049 r) {
    return r.valor + r.id;
}
