// fichero 41073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41073;

Registro41073 crear_registro41073(int id) {
    Registro41073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41073(Registro41073 r) {
    return r.valor + r.id;
}
