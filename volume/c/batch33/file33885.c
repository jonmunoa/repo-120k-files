// fichero 33885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33885;

Registro33885 crear_registro33885(int id) {
    Registro33885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33885(Registro33885 r) {
    return r.valor + r.id;
}
