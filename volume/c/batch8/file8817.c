// fichero 8817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8817;

Registro8817 crear_registro8817(int id) {
    Registro8817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8817(Registro8817 r) {
    return r.valor + r.id;
}
