// fichero 22949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22949;

Registro22949 crear_registro22949(int id) {
    Registro22949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22949(Registro22949 r) {
    return r.valor + r.id;
}
