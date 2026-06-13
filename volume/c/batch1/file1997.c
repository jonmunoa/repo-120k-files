// fichero 1997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1997;

Registro1997 crear_registro1997(int id) {
    Registro1997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1997(Registro1997 r) {
    return r.valor + r.id;
}
