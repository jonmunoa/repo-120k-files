// fichero 47373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47373;

Registro47373 crear_registro47373(int id) {
    Registro47373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47373(Registro47373 r) {
    return r.valor + r.id;
}
