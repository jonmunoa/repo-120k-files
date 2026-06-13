// fichero 54897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54897;

Registro54897 crear_registro54897(int id) {
    Registro54897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54897(Registro54897 r) {
    return r.valor + r.id;
}
