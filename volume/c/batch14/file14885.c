// fichero 14885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14885;

Registro14885 crear_registro14885(int id) {
    Registro14885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14885(Registro14885 r) {
    return r.valor + r.id;
}
