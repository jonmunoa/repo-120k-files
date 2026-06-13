// fichero 53545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53545;

Registro53545 crear_registro53545(int id) {
    Registro53545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53545(Registro53545 r) {
    return r.valor + r.id;
}
