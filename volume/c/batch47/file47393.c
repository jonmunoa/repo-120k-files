// fichero 47393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47393;

Registro47393 crear_registro47393(int id) {
    Registro47393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47393(Registro47393 r) {
    return r.valor + r.id;
}
