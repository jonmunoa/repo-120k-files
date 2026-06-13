// fichero 47749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47749;

Registro47749 crear_registro47749(int id) {
    Registro47749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47749(Registro47749 r) {
    return r.valor + r.id;
}
