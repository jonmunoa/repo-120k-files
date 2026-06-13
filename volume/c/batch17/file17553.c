// fichero 17553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17553;

Registro17553 crear_registro17553(int id) {
    Registro17553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17553(Registro17553 r) {
    return r.valor + r.id;
}
