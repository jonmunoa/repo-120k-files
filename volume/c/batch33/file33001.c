// fichero 33001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33001;

Registro33001 crear_registro33001(int id) {
    Registro33001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33001(Registro33001 r) {
    return r.valor + r.id;
}
