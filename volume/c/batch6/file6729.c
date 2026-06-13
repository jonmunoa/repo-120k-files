// fichero 6729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6729;

Registro6729 crear_registro6729(int id) {
    Registro6729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6729(Registro6729 r) {
    return r.valor + r.id;
}
