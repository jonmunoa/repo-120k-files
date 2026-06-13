// fichero 2145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2145;

Registro2145 crear_registro2145(int id) {
    Registro2145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2145(Registro2145 r) {
    return r.valor + r.id;
}
