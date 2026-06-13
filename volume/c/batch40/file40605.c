// fichero 40605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40605;

Registro40605 crear_registro40605(int id) {
    Registro40605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40605(Registro40605 r) {
    return r.valor + r.id;
}
