// fichero 14193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14193;

Registro14193 crear_registro14193(int id) {
    Registro14193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14193(Registro14193 r) {
    return r.valor + r.id;
}
