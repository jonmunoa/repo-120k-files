// fichero 26881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26881;

Registro26881 crear_registro26881(int id) {
    Registro26881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26881(Registro26881 r) {
    return r.valor + r.id;
}
