// fichero 10817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10817;

Registro10817 crear_registro10817(int id) {
    Registro10817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10817(Registro10817 r) {
    return r.valor + r.id;
}
