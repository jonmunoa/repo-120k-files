// fichero 20573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20573;

Registro20573 crear_registro20573(int id) {
    Registro20573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20573(Registro20573 r) {
    return r.valor + r.id;
}
