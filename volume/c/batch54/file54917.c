// fichero 54917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54917;

Registro54917 crear_registro54917(int id) {
    Registro54917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54917(Registro54917 r) {
    return r.valor + r.id;
}
