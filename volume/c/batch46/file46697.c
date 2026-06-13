// fichero 46697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46697;

Registro46697 crear_registro46697(int id) {
    Registro46697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46697(Registro46697 r) {
    return r.valor + r.id;
}
