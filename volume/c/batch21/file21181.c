// fichero 21181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21181;

Registro21181 crear_registro21181(int id) {
    Registro21181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21181(Registro21181 r) {
    return r.valor + r.id;
}
