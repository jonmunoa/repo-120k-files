// fichero 16997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16997;

Registro16997 crear_registro16997(int id) {
    Registro16997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16997(Registro16997 r) {
    return r.valor + r.id;
}
