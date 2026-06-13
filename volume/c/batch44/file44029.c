// fichero 44029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44029;

Registro44029 crear_registro44029(int id) {
    Registro44029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44029(Registro44029 r) {
    return r.valor + r.id;
}
