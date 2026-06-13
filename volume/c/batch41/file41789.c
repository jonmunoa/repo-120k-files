// fichero 41789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41789;

Registro41789 crear_registro41789(int id) {
    Registro41789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41789(Registro41789 r) {
    return r.valor + r.id;
}
