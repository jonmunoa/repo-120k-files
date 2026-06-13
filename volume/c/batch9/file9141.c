// fichero 9141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9141;

Registro9141 crear_registro9141(int id) {
    Registro9141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9141(Registro9141 r) {
    return r.valor + r.id;
}
