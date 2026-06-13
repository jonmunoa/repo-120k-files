// fichero 47257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47257;

Registro47257 crear_registro47257(int id) {
    Registro47257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47257(Registro47257 r) {
    return r.valor + r.id;
}
