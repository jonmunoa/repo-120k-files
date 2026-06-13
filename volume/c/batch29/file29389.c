// fichero 29389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29389;

Registro29389 crear_registro29389(int id) {
    Registro29389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29389(Registro29389 r) {
    return r.valor + r.id;
}
