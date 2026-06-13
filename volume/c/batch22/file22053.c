// fichero 22053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22053;

Registro22053 crear_registro22053(int id) {
    Registro22053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22053(Registro22053 r) {
    return r.valor + r.id;
}
