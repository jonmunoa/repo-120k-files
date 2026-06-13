// fichero 9921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9921;

Registro9921 crear_registro9921(int id) {
    Registro9921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9921(Registro9921 r) {
    return r.valor + r.id;
}
