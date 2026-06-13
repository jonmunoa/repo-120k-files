// fichero 41585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41585;

Registro41585 crear_registro41585(int id) {
    Registro41585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41585(Registro41585 r) {
    return r.valor + r.id;
}
