// fichero 16181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16181;

Registro16181 crear_registro16181(int id) {
    Registro16181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16181(Registro16181 r) {
    return r.valor + r.id;
}
