// fichero 41177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41177;

Registro41177 crear_registro41177(int id) {
    Registro41177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41177(Registro41177 r) {
    return r.valor + r.id;
}
