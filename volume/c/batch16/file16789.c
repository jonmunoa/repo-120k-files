// fichero 16789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16789;

Registro16789 crear_registro16789(int id) {
    Registro16789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16789(Registro16789 r) {
    return r.valor + r.id;
}
