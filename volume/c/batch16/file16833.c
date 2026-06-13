// fichero 16833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16833;

Registro16833 crear_registro16833(int id) {
    Registro16833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16833(Registro16833 r) {
    return r.valor + r.id;
}
