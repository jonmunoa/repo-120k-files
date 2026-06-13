// fichero 7193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7193;

Registro7193 crear_registro7193(int id) {
    Registro7193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7193(Registro7193 r) {
    return r.valor + r.id;
}
