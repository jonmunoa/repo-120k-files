// fichero 41521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41521;

Registro41521 crear_registro41521(int id) {
    Registro41521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41521(Registro41521 r) {
    return r.valor + r.id;
}
