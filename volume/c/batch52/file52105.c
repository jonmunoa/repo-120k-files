// fichero 52105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52105;

Registro52105 crear_registro52105(int id) {
    Registro52105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52105(Registro52105 r) {
    return r.valor + r.id;
}
