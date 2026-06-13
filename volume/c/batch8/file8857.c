// fichero 8857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8857;

Registro8857 crear_registro8857(int id) {
    Registro8857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8857(Registro8857 r) {
    return r.valor + r.id;
}
