// fichero 9173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9173;

Registro9173 crear_registro9173(int id) {
    Registro9173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9173(Registro9173 r) {
    return r.valor + r.id;
}
