// fichero 1221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1221;

Registro1221 crear_registro1221(int id) {
    Registro1221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1221(Registro1221 r) {
    return r.valor + r.id;
}
