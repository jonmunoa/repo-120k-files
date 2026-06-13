// fichero 7141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7141;

Registro7141 crear_registro7141(int id) {
    Registro7141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7141(Registro7141 r) {
    return r.valor + r.id;
}
