// fichero 6521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6521;

Registro6521 crear_registro6521(int id) {
    Registro6521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6521(Registro6521 r) {
    return r.valor + r.id;
}
