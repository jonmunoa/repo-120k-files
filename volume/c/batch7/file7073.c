// fichero 7073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7073;

Registro7073 crear_registro7073(int id) {
    Registro7073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7073(Registro7073 r) {
    return r.valor + r.id;
}
