// fichero 27213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27213;

Registro27213 crear_registro27213(int id) {
    Registro27213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27213(Registro27213 r) {
    return r.valor + r.id;
}
