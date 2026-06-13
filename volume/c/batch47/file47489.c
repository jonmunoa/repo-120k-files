// fichero 47489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47489;

Registro47489 crear_registro47489(int id) {
    Registro47489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47489(Registro47489 r) {
    return r.valor + r.id;
}
