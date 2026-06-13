// fichero 45397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45397;

Registro45397 crear_registro45397(int id) {
    Registro45397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45397(Registro45397 r) {
    return r.valor + r.id;
}
