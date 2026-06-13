// fichero 41821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41821;

Registro41821 crear_registro41821(int id) {
    Registro41821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41821(Registro41821 r) {
    return r.valor + r.id;
}
