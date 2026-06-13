// fichero 40273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40273;

Registro40273 crear_registro40273(int id) {
    Registro40273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40273(Registro40273 r) {
    return r.valor + r.id;
}
