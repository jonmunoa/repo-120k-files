// fichero 43981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43981;

Registro43981 crear_registro43981(int id) {
    Registro43981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43981(Registro43981 r) {
    return r.valor + r.id;
}
