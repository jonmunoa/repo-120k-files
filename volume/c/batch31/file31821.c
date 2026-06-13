// fichero 31821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31821;

Registro31821 crear_registro31821(int id) {
    Registro31821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31821(Registro31821 r) {
    return r.valor + r.id;
}
