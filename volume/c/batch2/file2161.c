// fichero 2161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2161;

Registro2161 crear_registro2161(int id) {
    Registro2161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2161(Registro2161 r) {
    return r.valor + r.id;
}
