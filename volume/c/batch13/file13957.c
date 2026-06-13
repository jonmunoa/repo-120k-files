// fichero 13957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13957;

Registro13957 crear_registro13957(int id) {
    Registro13957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13957(Registro13957 r) {
    return r.valor + r.id;
}
