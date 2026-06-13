// fichero 35869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35869;

Registro35869 crear_registro35869(int id) {
    Registro35869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35869(Registro35869 r) {
    return r.valor + r.id;
}
