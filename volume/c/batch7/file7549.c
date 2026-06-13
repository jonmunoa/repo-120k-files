// fichero 7549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7549;

Registro7549 crear_registro7549(int id) {
    Registro7549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7549(Registro7549 r) {
    return r.valor + r.id;
}
