// fichero 29381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29381;

Registro29381 crear_registro29381(int id) {
    Registro29381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29381(Registro29381 r) {
    return r.valor + r.id;
}
