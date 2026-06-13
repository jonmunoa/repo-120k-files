// fichero 22353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22353;

Registro22353 crear_registro22353(int id) {
    Registro22353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22353(Registro22353 r) {
    return r.valor + r.id;
}
