// fichero 16965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16965;

Registro16965 crear_registro16965(int id) {
    Registro16965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16965(Registro16965 r) {
    return r.valor + r.id;
}
