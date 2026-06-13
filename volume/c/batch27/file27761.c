// fichero 27761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27761;

Registro27761 crear_registro27761(int id) {
    Registro27761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27761(Registro27761 r) {
    return r.valor + r.id;
}
