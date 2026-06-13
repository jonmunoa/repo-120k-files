// fichero 7005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7005;

Registro7005 crear_registro7005(int id) {
    Registro7005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7005(Registro7005 r) {
    return r.valor + r.id;
}
