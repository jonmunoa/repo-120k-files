// fichero 54193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54193;

Registro54193 crear_registro54193(int id) {
    Registro54193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54193(Registro54193 r) {
    return r.valor + r.id;
}
