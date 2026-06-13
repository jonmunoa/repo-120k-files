// fichero 54489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54489;

Registro54489 crear_registro54489(int id) {
    Registro54489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54489(Registro54489 r) {
    return r.valor + r.id;
}
