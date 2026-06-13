// fichero 1369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1369;

Registro1369 crear_registro1369(int id) {
    Registro1369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1369(Registro1369 r) {
    return r.valor + r.id;
}
