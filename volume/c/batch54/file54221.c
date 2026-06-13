// fichero 54221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54221;

Registro54221 crear_registro54221(int id) {
    Registro54221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54221(Registro54221 r) {
    return r.valor + r.id;
}
