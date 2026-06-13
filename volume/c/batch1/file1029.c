// fichero 1029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1029;

Registro1029 crear_registro1029(int id) {
    Registro1029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1029(Registro1029 r) {
    return r.valor + r.id;
}
