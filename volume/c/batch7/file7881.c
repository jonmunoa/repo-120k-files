// fichero 7881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7881;

Registro7881 crear_registro7881(int id) {
    Registro7881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7881(Registro7881 r) {
    return r.valor + r.id;
}
