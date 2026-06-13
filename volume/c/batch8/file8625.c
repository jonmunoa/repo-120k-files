// fichero 8625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8625;

Registro8625 crear_registro8625(int id) {
    Registro8625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8625(Registro8625 r) {
    return r.valor + r.id;
}
