// fichero 7865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7865;

Registro7865 crear_registro7865(int id) {
    Registro7865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7865(Registro7865 r) {
    return r.valor + r.id;
}
