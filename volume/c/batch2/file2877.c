// fichero 2877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2877;

Registro2877 crear_registro2877(int id) {
    Registro2877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2877(Registro2877 r) {
    return r.valor + r.id;
}
