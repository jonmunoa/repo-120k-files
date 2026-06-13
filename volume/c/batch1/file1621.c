// fichero 1621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1621;

Registro1621 crear_registro1621(int id) {
    Registro1621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1621(Registro1621 r) {
    return r.valor + r.id;
}
