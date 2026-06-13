// fichero 1281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1281;

Registro1281 crear_registro1281(int id) {
    Registro1281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1281(Registro1281 r) {
    return r.valor + r.id;
}
