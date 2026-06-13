// fichero 41253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41253;

Registro41253 crear_registro41253(int id) {
    Registro41253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41253(Registro41253 r) {
    return r.valor + r.id;
}
