// fichero 16713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16713;

Registro16713 crear_registro16713(int id) {
    Registro16713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16713(Registro16713 r) {
    return r.valor + r.id;
}
