// fichero 30993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30993;

Registro30993 crear_registro30993(int id) {
    Registro30993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30993(Registro30993 r) {
    return r.valor + r.id;
}
