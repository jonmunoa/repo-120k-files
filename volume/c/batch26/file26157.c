// fichero 26157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26157;

Registro26157 crear_registro26157(int id) {
    Registro26157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26157(Registro26157 r) {
    return r.valor + r.id;
}
