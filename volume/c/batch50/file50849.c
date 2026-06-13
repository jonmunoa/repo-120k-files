// fichero 50849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50849;

Registro50849 crear_registro50849(int id) {
    Registro50849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50849(Registro50849 r) {
    return r.valor + r.id;
}
