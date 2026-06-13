// fichero 8029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8029;

Registro8029 crear_registro8029(int id) {
    Registro8029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8029(Registro8029 r) {
    return r.valor + r.id;
}
