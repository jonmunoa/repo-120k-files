// fichero 47305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47305;

Registro47305 crear_registro47305(int id) {
    Registro47305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47305(Registro47305 r) {
    return r.valor + r.id;
}
