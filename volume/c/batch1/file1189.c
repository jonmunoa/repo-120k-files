// fichero 1189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1189;

Registro1189 crear_registro1189(int id) {
    Registro1189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1189(Registro1189 r) {
    return r.valor + r.id;
}
