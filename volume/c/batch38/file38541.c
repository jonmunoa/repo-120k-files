// fichero 38541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38541;

Registro38541 crear_registro38541(int id) {
    Registro38541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38541(Registro38541 r) {
    return r.valor + r.id;
}
