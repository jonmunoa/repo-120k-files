// fichero 49789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49789;

Registro49789 crear_registro49789(int id) {
    Registro49789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49789(Registro49789 r) {
    return r.valor + r.id;
}
