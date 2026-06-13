// fichero 41813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41813;

Registro41813 crear_registro41813(int id) {
    Registro41813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41813(Registro41813 r) {
    return r.valor + r.id;
}
