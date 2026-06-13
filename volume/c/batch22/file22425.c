// fichero 22425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22425;

Registro22425 crear_registro22425(int id) {
    Registro22425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22425(Registro22425 r) {
    return r.valor + r.id;
}
