// fichero 1313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1313;

Registro1313 crear_registro1313(int id) {
    Registro1313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1313(Registro1313 r) {
    return r.valor + r.id;
}
