// fichero 16829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16829;

Registro16829 crear_registro16829(int id) {
    Registro16829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16829(Registro16829 r) {
    return r.valor + r.id;
}
