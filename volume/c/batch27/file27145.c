// fichero 27145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27145;

Registro27145 crear_registro27145(int id) {
    Registro27145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27145(Registro27145 r) {
    return r.valor + r.id;
}
