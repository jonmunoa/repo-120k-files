// fichero 53221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53221;

Registro53221 crear_registro53221(int id) {
    Registro53221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53221(Registro53221 r) {
    return r.valor + r.id;
}
