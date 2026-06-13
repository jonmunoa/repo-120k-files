// fichero 47545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47545;

Registro47545 crear_registro47545(int id) {
    Registro47545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47545(Registro47545 r) {
    return r.valor + r.id;
}
