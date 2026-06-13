// fichero 47237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47237;

Registro47237 crear_registro47237(int id) {
    Registro47237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47237(Registro47237 r) {
    return r.valor + r.id;
}
