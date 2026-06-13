// fichero 40137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40137;

Registro40137 crear_registro40137(int id) {
    Registro40137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40137(Registro40137 r) {
    return r.valor + r.id;
}
