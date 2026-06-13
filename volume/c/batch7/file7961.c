// fichero 7961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7961;

Registro7961 crear_registro7961(int id) {
    Registro7961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7961(Registro7961 r) {
    return r.valor + r.id;
}
