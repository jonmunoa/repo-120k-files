// fichero 53301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53301;

Registro53301 crear_registro53301(int id) {
    Registro53301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53301(Registro53301 r) {
    return r.valor + r.id;
}
