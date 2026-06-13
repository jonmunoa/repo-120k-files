// fichero 21921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21921;

Registro21921 crear_registro21921(int id) {
    Registro21921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21921(Registro21921 r) {
    return r.valor + r.id;
}
