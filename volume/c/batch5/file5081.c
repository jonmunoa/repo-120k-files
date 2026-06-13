// fichero 5081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5081;

Registro5081 crear_registro5081(int id) {
    Registro5081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5081(Registro5081 r) {
    return r.valor + r.id;
}
