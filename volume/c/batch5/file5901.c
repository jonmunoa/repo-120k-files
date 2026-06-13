// fichero 5901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5901;

Registro5901 crear_registro5901(int id) {
    Registro5901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5901(Registro5901 r) {
    return r.valor + r.id;
}
