// fichero 52017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52017;

Registro52017 crear_registro52017(int id) {
    Registro52017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52017(Registro52017 r) {
    return r.valor + r.id;
}
