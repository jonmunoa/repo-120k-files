// fichero 22521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22521;

Registro22521 crear_registro22521(int id) {
    Registro22521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22521(Registro22521 r) {
    return r.valor + r.id;
}
