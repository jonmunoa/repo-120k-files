// fichero 1249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1249;

Registro1249 crear_registro1249(int id) {
    Registro1249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1249(Registro1249 r) {
    return r.valor + r.id;
}
