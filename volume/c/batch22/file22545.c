// fichero 22545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22545;

Registro22545 crear_registro22545(int id) {
    Registro22545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22545(Registro22545 r) {
    return r.valor + r.id;
}
