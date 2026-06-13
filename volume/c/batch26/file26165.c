// fichero 26165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26165;

Registro26165 crear_registro26165(int id) {
    Registro26165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26165(Registro26165 r) {
    return r.valor + r.id;
}
