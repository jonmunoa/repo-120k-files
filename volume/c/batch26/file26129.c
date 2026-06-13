// fichero 26129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26129;

Registro26129 crear_registro26129(int id) {
    Registro26129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26129(Registro26129 r) {
    return r.valor + r.id;
}
