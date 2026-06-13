// fichero 52177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52177;

Registro52177 crear_registro52177(int id) {
    Registro52177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52177(Registro52177 r) {
    return r.valor + r.id;
}
