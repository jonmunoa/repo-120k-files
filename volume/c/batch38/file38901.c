// fichero 38901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38901;

Registro38901 crear_registro38901(int id) {
    Registro38901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38901(Registro38901 r) {
    return r.valor + r.id;
}
