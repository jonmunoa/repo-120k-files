// fichero 52857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52857;

Registro52857 crear_registro52857(int id) {
    Registro52857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52857(Registro52857 r) {
    return r.valor + r.id;
}
