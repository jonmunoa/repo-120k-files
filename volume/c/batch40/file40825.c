// fichero 40825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40825;

Registro40825 crear_registro40825(int id) {
    Registro40825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40825(Registro40825 r) {
    return r.valor + r.id;
}
