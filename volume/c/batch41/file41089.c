// fichero 41089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41089;

Registro41089 crear_registro41089(int id) {
    Registro41089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41089(Registro41089 r) {
    return r.valor + r.id;
}
