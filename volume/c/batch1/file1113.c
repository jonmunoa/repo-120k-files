// fichero 1113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1113;

Registro1113 crear_registro1113(int id) {
    Registro1113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1113(Registro1113 r) {
    return r.valor + r.id;
}
