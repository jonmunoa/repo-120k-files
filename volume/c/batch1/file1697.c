// fichero 1697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1697;

Registro1697 crear_registro1697(int id) {
    Registro1697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1697(Registro1697 r) {
    return r.valor + r.id;
}
