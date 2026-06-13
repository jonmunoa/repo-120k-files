// fichero 40061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40061;

Registro40061 crear_registro40061(int id) {
    Registro40061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40061(Registro40061 r) {
    return r.valor + r.id;
}
