// fichero 5401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5401;

Registro5401 crear_registro5401(int id) {
    Registro5401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5401(Registro5401 r) {
    return r.valor + r.id;
}
