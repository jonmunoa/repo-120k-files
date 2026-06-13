// fichero 22781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22781;

Registro22781 crear_registro22781(int id) {
    Registro22781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22781(Registro22781 r) {
    return r.valor + r.id;
}
