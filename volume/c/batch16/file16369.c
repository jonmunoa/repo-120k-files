// fichero 16369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16369;

Registro16369 crear_registro16369(int id) {
    Registro16369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16369(Registro16369 r) {
    return r.valor + r.id;
}
