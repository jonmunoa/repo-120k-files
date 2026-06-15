// fichero 46537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46537;

Registro46537 crear_registro46537(int id) {
    Registro46537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
