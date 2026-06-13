// fichero 28545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28545;

Registro28545 crear_registro28545(int id) {
    Registro28545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28545(Registro28545 r) {
    return r.valor + r.id;
}
