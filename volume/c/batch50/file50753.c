// fichero 50753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50753;

Registro50753 crear_registro50753(int id) {
    Registro50753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50753(Registro50753 r) {
    return r.valor + r.id;
}
