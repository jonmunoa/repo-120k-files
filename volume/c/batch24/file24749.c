// fichero 24749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24749;

Registro24749 crear_registro24749(int id) {
    Registro24749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24749(Registro24749 r) {
    return r.valor + r.id;
}
