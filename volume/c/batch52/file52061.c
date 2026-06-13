// fichero 52061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52061;

Registro52061 crear_registro52061(int id) {
    Registro52061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52061(Registro52061 r) {
    return r.valor + r.id;
}
