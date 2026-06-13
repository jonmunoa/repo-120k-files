// fichero 41673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41673;

Registro41673 crear_registro41673(int id) {
    Registro41673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41673(Registro41673 r) {
    return r.valor + r.id;
}
