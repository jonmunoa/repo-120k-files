// fichero 52833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52833;

Registro52833 crear_registro52833(int id) {
    Registro52833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52833(Registro52833 r) {
    return r.valor + r.id;
}
