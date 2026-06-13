// fichero 1425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1425;

Registro1425 crear_registro1425(int id) {
    Registro1425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1425(Registro1425 r) {
    return r.valor + r.id;
}
