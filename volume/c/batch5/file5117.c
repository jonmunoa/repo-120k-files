// fichero 5117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5117;

Registro5117 crear_registro5117(int id) {
    Registro5117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5117(Registro5117 r) {
    return r.valor + r.id;
}
