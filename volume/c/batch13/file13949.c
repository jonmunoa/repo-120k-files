// fichero 13949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13949;

Registro13949 crear_registro13949(int id) {
    Registro13949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13949(Registro13949 r) {
    return r.valor + r.id;
}
