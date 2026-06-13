// fichero 33237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33237;

Registro33237 crear_registro33237(int id) {
    Registro33237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33237(Registro33237 r) {
    return r.valor + r.id;
}
