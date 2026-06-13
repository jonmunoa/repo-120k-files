// fichero 1577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1577;

Registro1577 crear_registro1577(int id) {
    Registro1577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1577(Registro1577 r) {
    return r.valor + r.id;
}
