// fichero 9597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9597;

Registro9597 crear_registro9597(int id) {
    Registro9597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9597(Registro9597 r) {
    return r.valor + r.id;
}
