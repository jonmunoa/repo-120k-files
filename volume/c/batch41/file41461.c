// fichero 41461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41461;

Registro41461 crear_registro41461(int id) {
    Registro41461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41461(Registro41461 r) {
    return r.valor + r.id;
}
