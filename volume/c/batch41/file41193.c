// fichero 41193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41193;

Registro41193 crear_registro41193(int id) {
    Registro41193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41193(Registro41193 r) {
    return r.valor + r.id;
}
