// fichero 9033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9033;

Registro9033 crear_registro9033(int id) {
    Registro9033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9033(Registro9033 r) {
    return r.valor + r.id;
}
