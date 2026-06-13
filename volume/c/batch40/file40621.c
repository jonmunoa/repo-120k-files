// fichero 40621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40621;

Registro40621 crear_registro40621(int id) {
    Registro40621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40621(Registro40621 r) {
    return r.valor + r.id;
}
