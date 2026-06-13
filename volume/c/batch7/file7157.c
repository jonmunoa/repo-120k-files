// fichero 7157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7157;

Registro7157 crear_registro7157(int id) {
    Registro7157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7157(Registro7157 r) {
    return r.valor + r.id;
}
