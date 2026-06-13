// fichero 50901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50901;

Registro50901 crear_registro50901(int id) {
    Registro50901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50901(Registro50901 r) {
    return r.valor + r.id;
}
