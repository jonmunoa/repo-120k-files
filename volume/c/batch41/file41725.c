// fichero 41725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41725;

Registro41725 crear_registro41725(int id) {
    Registro41725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41725(Registro41725 r) {
    return r.valor + r.id;
}
