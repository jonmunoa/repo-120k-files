// fichero 7177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7177;

Registro7177 crear_registro7177(int id) {
    Registro7177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7177(Registro7177 r) {
    return r.valor + r.id;
}
