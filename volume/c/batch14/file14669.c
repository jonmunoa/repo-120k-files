// fichero 14669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14669;

Registro14669 crear_registro14669(int id) {
    Registro14669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14669(Registro14669 r) {
    return r.valor + r.id;
}
