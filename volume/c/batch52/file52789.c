// fichero 52789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52789;

Registro52789 crear_registro52789(int id) {
    Registro52789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52789(Registro52789 r) {
    return r.valor + r.id;
}
