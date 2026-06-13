// fichero 7281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7281;

Registro7281 crear_registro7281(int id) {
    Registro7281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7281(Registro7281 r) {
    return r.valor + r.id;
}
