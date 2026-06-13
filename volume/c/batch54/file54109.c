// fichero 54109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54109;

Registro54109 crear_registro54109(int id) {
    Registro54109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54109(Registro54109 r) {
    return r.valor + r.id;
}
