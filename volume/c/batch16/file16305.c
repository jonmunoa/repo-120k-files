// fichero 16305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16305;

Registro16305 crear_registro16305(int id) {
    Registro16305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16305(Registro16305 r) {
    return r.valor + r.id;
}
