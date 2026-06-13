// fichero 44165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44165;

Registro44165 crear_registro44165(int id) {
    Registro44165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44165(Registro44165 r) {
    return r.valor + r.id;
}
