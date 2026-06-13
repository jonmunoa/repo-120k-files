// fichero 27801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27801;

Registro27801 crear_registro27801(int id) {
    Registro27801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27801(Registro27801 r) {
    return r.valor + r.id;
}
