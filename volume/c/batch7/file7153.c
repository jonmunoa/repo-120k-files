// fichero 7153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7153;

Registro7153 crear_registro7153(int id) {
    Registro7153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7153(Registro7153 r) {
    return r.valor + r.id;
}
