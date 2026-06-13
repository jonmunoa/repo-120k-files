// fichero 1557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1557;

Registro1557 crear_registro1557(int id) {
    Registro1557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1557(Registro1557 r) {
    return r.valor + r.id;
}
