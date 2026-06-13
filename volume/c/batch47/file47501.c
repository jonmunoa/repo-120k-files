// fichero 47501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47501;

Registro47501 crear_registro47501(int id) {
    Registro47501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47501(Registro47501 r) {
    return r.valor + r.id;
}
