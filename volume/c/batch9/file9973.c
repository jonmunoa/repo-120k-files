// fichero 9973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9973;

Registro9973 crear_registro9973(int id) {
    Registro9973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9973(Registro9973 r) {
    return r.valor + r.id;
}
