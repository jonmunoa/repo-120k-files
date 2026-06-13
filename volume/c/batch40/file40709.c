// fichero 40709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40709;

Registro40709 crear_registro40709(int id) {
    Registro40709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40709(Registro40709 r) {
    return r.valor + r.id;
}
