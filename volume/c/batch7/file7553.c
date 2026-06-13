// fichero 7553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7553;

Registro7553 crear_registro7553(int id) {
    Registro7553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7553(Registro7553 r) {
    return r.valor + r.id;
}
