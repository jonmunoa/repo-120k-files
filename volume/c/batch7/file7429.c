// fichero 7429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7429;

Registro7429 crear_registro7429(int id) {
    Registro7429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7429(Registro7429 r) {
    return r.valor + r.id;
}
