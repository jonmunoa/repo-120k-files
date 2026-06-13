// fichero 33821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33821;

Registro33821 crear_registro33821(int id) {
    Registro33821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33821(Registro33821 r) {
    return r.valor + r.id;
}
