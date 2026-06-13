// fichero 27769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27769;

Registro27769 crear_registro27769(int id) {
    Registro27769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27769(Registro27769 r) {
    return r.valor + r.id;
}
