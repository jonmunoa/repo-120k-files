// fichero 45901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45901;

Registro45901 crear_registro45901(int id) {
    Registro45901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45901(Registro45901 r) {
    return r.valor + r.id;
}
