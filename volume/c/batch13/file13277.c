// fichero 13277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13277;

Registro13277 crear_registro13277(int id) {
    Registro13277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13277(Registro13277 r) {
    return r.valor + r.id;
}
