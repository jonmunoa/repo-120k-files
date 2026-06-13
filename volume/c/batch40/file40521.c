// fichero 40521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40521;

Registro40521 crear_registro40521(int id) {
    Registro40521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40521(Registro40521 r) {
    return r.valor + r.id;
}
