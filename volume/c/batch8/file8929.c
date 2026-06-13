// fichero 8929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8929;

Registro8929 crear_registro8929(int id) {
    Registro8929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8929(Registro8929 r) {
    return r.valor + r.id;
}
