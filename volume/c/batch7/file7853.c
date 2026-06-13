// fichero 7853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7853;

Registro7853 crear_registro7853(int id) {
    Registro7853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7853(Registro7853 r) {
    return r.valor + r.id;
}
