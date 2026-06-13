// fichero 52969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52969;

Registro52969 crear_registro52969(int id) {
    Registro52969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52969(Registro52969 r) {
    return r.valor + r.id;
}
