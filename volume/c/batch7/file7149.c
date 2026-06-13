// fichero 7149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7149;

Registro7149 crear_registro7149(int id) {
    Registro7149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7149(Registro7149 r) {
    return r.valor + r.id;
}
