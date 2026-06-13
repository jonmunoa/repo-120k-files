// fichero 41293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41293;

Registro41293 crear_registro41293(int id) {
    Registro41293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41293(Registro41293 r) {
    return r.valor + r.id;
}
