// fichero 46973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46973;

Registro46973 crear_registro46973(int id) {
    Registro46973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
