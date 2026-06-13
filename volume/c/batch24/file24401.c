// fichero 24401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24401;

Registro24401 crear_registro24401(int id) {
    Registro24401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24401(Registro24401 r) {
    return r.valor + r.id;
}
