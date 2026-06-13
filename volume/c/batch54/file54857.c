// fichero 54857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54857;

Registro54857 crear_registro54857(int id) {
    Registro54857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54857(Registro54857 r) {
    return r.valor + r.id;
}
