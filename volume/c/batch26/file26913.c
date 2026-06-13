// fichero 26913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26913;

Registro26913 crear_registro26913(int id) {
    Registro26913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26913(Registro26913 r) {
    return r.valor + r.id;
}
