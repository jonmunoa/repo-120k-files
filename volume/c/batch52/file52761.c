// fichero 52761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52761;

Registro52761 crear_registro52761(int id) {
    Registro52761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52761(Registro52761 r) {
    return r.valor + r.id;
}
