// fichero 38421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38421;

Registro38421 crear_registro38421(int id) {
    Registro38421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38421(Registro38421 r) {
    return r.valor + r.id;
}
