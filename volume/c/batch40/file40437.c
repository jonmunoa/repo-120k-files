// fichero 40437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40437;

Registro40437 crear_registro40437(int id) {
    Registro40437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40437(Registro40437 r) {
    return r.valor + r.id;
}
