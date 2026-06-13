// fichero 29049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29049;

Registro29049 crear_registro29049(int id) {
    Registro29049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29049(Registro29049 r) {
    return r.valor + r.id;
}
