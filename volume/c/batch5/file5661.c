// fichero 5661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5661;

Registro5661 crear_registro5661(int id) {
    Registro5661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5661(Registro5661 r) {
    return r.valor + r.id;
}
