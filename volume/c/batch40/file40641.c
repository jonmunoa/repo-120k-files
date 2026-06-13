// fichero 40641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40641;

Registro40641 crear_registro40641(int id) {
    Registro40641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40641(Registro40641 r) {
    return r.valor + r.id;
}
