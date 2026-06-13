// fichero 16621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16621;

Registro16621 crear_registro16621(int id) {
    Registro16621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16621(Registro16621 r) {
    return r.valor + r.id;
}
