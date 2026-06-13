// fichero 47901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47901;

Registro47901 crear_registro47901(int id) {
    Registro47901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47901(Registro47901 r) {
    return r.valor + r.id;
}
