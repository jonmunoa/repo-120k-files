// fichero 7077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7077;

Registro7077 crear_registro7077(int id) {
    Registro7077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7077(Registro7077 r) {
    return r.valor + r.id;
}
