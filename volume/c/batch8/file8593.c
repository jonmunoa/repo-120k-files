// fichero 8593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8593;

Registro8593 crear_registro8593(int id) {
    Registro8593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8593(Registro8593 r) {
    return r.valor + r.id;
}
