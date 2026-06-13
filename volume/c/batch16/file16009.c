// fichero 16009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16009;

Registro16009 crear_registro16009(int id) {
    Registro16009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16009(Registro16009 r) {
    return r.valor + r.id;
}
