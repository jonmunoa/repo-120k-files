// fichero 7181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7181;

Registro7181 crear_registro7181(int id) {
    Registro7181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7181(Registro7181 r) {
    return r.valor + r.id;
}
