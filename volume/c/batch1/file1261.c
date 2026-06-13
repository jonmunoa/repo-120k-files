// fichero 1261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1261;

Registro1261 crear_registro1261(int id) {
    Registro1261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1261(Registro1261 r) {
    return r.valor + r.id;
}
