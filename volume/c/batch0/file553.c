// fichero 553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro553;

Registro553 crear_registro553(int id) {
    Registro553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro553(Registro553 r) {
    return r.valor + r.id;
}
