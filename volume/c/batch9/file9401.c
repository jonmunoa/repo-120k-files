// fichero 9401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9401;

Registro9401 crear_registro9401(int id) {
    Registro9401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9401(Registro9401 r) {
    return r.valor + r.id;
}
