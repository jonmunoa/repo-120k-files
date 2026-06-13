// fichero 20549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20549;

Registro20549 crear_registro20549(int id) {
    Registro20549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20549(Registro20549 r) {
    return r.valor + r.id;
}
