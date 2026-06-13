// fichero 5005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5005;

Registro5005 crear_registro5005(int id) {
    Registro5005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5005(Registro5005 r) {
    return r.valor + r.id;
}
