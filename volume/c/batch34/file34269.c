// fichero 34269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34269;

Registro34269 crear_registro34269(int id) {
    Registro34269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34269(Registro34269 r) {
    return r.valor + r.id;
}
