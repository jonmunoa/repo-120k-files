// fichero 6049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6049;

Registro6049 crear_registro6049(int id) {
    Registro6049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6049(Registro6049 r) {
    return r.valor + r.id;
}
