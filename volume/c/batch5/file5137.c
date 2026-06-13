// fichero 5137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5137;

Registro5137 crear_registro5137(int id) {
    Registro5137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5137(Registro5137 r) {
    return r.valor + r.id;
}
