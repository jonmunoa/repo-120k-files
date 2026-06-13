// fichero 8181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8181;

Registro8181 crear_registro8181(int id) {
    Registro8181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8181(Registro8181 r) {
    return r.valor + r.id;
}
