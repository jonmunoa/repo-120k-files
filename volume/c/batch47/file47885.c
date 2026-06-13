// fichero 47885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47885;

Registro47885 crear_registro47885(int id) {
    Registro47885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47885(Registro47885 r) {
    return r.valor + r.id;
}
