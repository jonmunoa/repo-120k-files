// fichero 1217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1217;

Registro1217 crear_registro1217(int id) {
    Registro1217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1217(Registro1217 r) {
    return r.valor + r.id;
}
