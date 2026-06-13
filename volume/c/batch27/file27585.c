// fichero 27585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27585;

Registro27585 crear_registro27585(int id) {
    Registro27585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27585(Registro27585 r) {
    return r.valor + r.id;
}
