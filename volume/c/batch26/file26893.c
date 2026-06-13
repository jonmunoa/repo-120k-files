// fichero 26893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26893;

Registro26893 crear_registro26893(int id) {
    Registro26893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26893(Registro26893 r) {
    return r.valor + r.id;
}
