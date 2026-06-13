// fichero 1265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1265;

Registro1265 crear_registro1265(int id) {
    Registro1265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1265(Registro1265 r) {
    return r.valor + r.id;
}
