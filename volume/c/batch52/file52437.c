// fichero 52437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52437;

Registro52437 crear_registro52437(int id) {
    Registro52437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52437(Registro52437 r) {
    return r.valor + r.id;
}
