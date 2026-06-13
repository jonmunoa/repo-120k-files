// fichero 26153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26153;

Registro26153 crear_registro26153(int id) {
    Registro26153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26153(Registro26153 r) {
    return r.valor + r.id;
}
