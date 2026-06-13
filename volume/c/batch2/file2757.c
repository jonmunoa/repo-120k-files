// fichero 2757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2757;

Registro2757 crear_registro2757(int id) {
    Registro2757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2757(Registro2757 r) {
    return r.valor + r.id;
}
