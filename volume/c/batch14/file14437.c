// fichero 14437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14437;

Registro14437 crear_registro14437(int id) {
    Registro14437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14437(Registro14437 r) {
    return r.valor + r.id;
}
