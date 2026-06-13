// fichero 34749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34749;

Registro34749 crear_registro34749(int id) {
    Registro34749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34749(Registro34749 r) {
    return r.valor + r.id;
}
