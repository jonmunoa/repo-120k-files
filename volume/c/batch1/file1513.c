// fichero 1513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1513;

Registro1513 crear_registro1513(int id) {
    Registro1513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1513(Registro1513 r) {
    return r.valor + r.id;
}
