// fichero 22577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22577;

Registro22577 crear_registro22577(int id) {
    Registro22577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22577(Registro22577 r) {
    return r.valor + r.id;
}
