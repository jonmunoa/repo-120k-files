// fichero 2901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2901;

Registro2901 crear_registro2901(int id) {
    Registro2901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2901(Registro2901 r) {
    return r.valor + r.id;
}
