// fichero 1205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1205;

Registro1205 crear_registro1205(int id) {
    Registro1205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1205(Registro1205 r) {
    return r.valor + r.id;
}
