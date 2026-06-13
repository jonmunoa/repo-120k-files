// fichero 7821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7821;

Registro7821 crear_registro7821(int id) {
    Registro7821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7821(Registro7821 r) {
    return r.valor + r.id;
}
