// fichero 1361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1361;

Registro1361 crear_registro1361(int id) {
    Registro1361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1361(Registro1361 r) {
    return r.valor + r.id;
}
