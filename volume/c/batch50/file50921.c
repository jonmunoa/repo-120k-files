// fichero 50921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50921;

Registro50921 crear_registro50921(int id) {
    Registro50921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50921(Registro50921 r) {
    return r.valor + r.id;
}
