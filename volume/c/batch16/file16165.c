// fichero 16165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16165;

Registro16165 crear_registro16165(int id) {
    Registro16165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16165(Registro16165 r) {
    return r.valor + r.id;
}
