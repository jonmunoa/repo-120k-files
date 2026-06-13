// fichero 52785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52785;

Registro52785 crear_registro52785(int id) {
    Registro52785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52785(Registro52785 r) {
    return r.valor + r.id;
}
