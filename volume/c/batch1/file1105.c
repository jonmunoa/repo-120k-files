// fichero 1105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1105;

Registro1105 crear_registro1105(int id) {
    Registro1105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1105(Registro1105 r) {
    return r.valor + r.id;
}
