// fichero 53745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53745;

Registro53745 crear_registro53745(int id) {
    Registro53745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53745(Registro53745 r) {
    return r.valor + r.id;
}
