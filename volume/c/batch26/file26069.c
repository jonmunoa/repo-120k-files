// fichero 26069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26069;

Registro26069 crear_registro26069(int id) {
    Registro26069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26069(Registro26069 r) {
    return r.valor + r.id;
}
